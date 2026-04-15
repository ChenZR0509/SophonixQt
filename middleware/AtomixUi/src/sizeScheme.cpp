/**
 * @file sizeScheme.cpp
 * @brief Ui颜色配置文件
 * @author ChenZR
 */
/* Includes" "------------------------------------------------------------------*/
#include "sizeScheme.h"
/* Includes< >------------------------------------------------------------------*/
#include <QScreen>
#include <QtGlobal>
/* Namespace------------------------------------------------------------------*/
namespace AtomixUi
{

Size::Size(QObject *parent)
{
    QScreen *screen = QGuiApplication::primaryScreen();
    if (screen)
    {
        QRect geometry = screen->geometry();
        setScreenWidth(geometry.width());
        setScreenHeight(geometry.height());
    }
}

Size::~Size()
{
    ;
}

double Size::getSmallConner() const
{
    return smallConner;
}

double Size::getMediumConner() const
{
    return mediumConner;
}

double Size::getLargeConner() const
{
    return largeConner;
}

double Size::getSpacerScale() const
{
    return spacerScale;
}

void Size::setSpacerScale(double newSpacerScale)
{
    if (qFuzzyCompare(spacerScale, newSpacerScale))
        return;
    if (newSpacerScale < 0 || newSpacerScale > 1.0)
        return;
    spacerScale = newSpacerScale;
    setLayoutSpacer(qRound(windowSize*spacerScale));
    emit spacerScaleChanged();
}

double Size::getLayoutSpacer() const
{
    return layoutSpacer;
}

void Size::setLayoutSpacer(double newLayoutSpacer)
{
    if (qFuzzyCompare(layoutSpacer, newLayoutSpacer))
        return;
    layoutSpacer = newLayoutSpacer;
    emit layoutSpacerChanged();
}

double Size::getWindowSize() const
{
    return windowSize;
}

void Size::setWindowSize(double newWindowSize)
{
    if (qFuzzyCompare(windowSize, newWindowSize))
        return;
    windowSize = newWindowSize;
    setLayoutSpacer(qRound(windowSize*spacerScale));
    emit windowSizeChanged();
}

double Size::getWindowHeight() const
{
    return windowHeight;
}

void Size::setWindowHeight(double newWindowHeight)
{
    if (qFuzzyCompare(windowHeight, newWindowHeight))
        return;
    windowHeight = newWindowHeight;
    setWindowSize(sqrt(windowWidth*windowWidth+windowHeight*windowHeight));
    emit windowHeightChanged();
}

double Size::getWindowWidth() const
{
    return windowWidth;
}

void Size::setWindowWidth(double newWindowWidth)
{
    if (qFuzzyCompare(windowWidth, newWindowWidth))
        return;
    windowWidth = newWindowWidth;
    setWindowSize(sqrt(windowWidth*windowWidth+windowHeight*windowHeight));
    emit windowWidthChanged();
}

double Size::getWindowScale() const
{
    return windowScale;
}

void Size::setWindowScale(double newWindowScale)
{
    if (qFuzzyCompare(windowScale, newWindowScale))
        return;
    windowScale = newWindowScale;
    emit windowScaleChanged();
}

double Size::getScreenWidth() const
{
    return screenWidth;
}

void Size::setScreenWidth(double newScreenWidth)
{
    if (qFuzzyCompare(screenWidth, newScreenWidth))
        return;
    screenWidth = newScreenWidth;
    setScreenSize(sqrt(screenWidth*screenWidth+screenHeight*screenHeight));
    setWindowWidth(screenWidth*windowScale);
    emit screenWidthChanged();
}

double Size::getScreenHeight() const
{
    return screenHeight;
}

void Size::setScreenHeight(double newScreenHeight)
{
    if (qFuzzyCompare(screenHeight, newScreenHeight))
        return;
    screenHeight = newScreenHeight;
    setScreenSize(sqrt(screenWidth*screenWidth+screenHeight*screenHeight));
    setWindowHeight(screenHeight*windowScale);
    emit screenHeightChanged();
}

double Size::getScreenSize() const
{
    return screenSize;
}

void Size::setScreenSize(double newScreenSize)
{
    if (qFuzzyCompare(screenSize, newScreenSize))
        return;
    screenSize = newScreenSize;
    emit screenSizeChanged();
}
}
