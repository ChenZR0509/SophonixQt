/**
 * @file colorScheme.h
 * @brief Ui颜色配置文件
 * @author ChenZR
 */
/* Includes" "------------------------------------------------------------------*/
#include "colorScheme.h"
/* Includes< >------------------------------------------------------------------*/
#include <QScreen>
/* Namespace------------------------------------------------------------------*/
namespace AtomixUi
{

Color::Color(QObject *parent)
{
    ;
}

Color::~Color()
{
    ;
}

QColor Color::getWhite() const
{
    return white;
}

QColor Color::getTransparent() const
{
    return transparent;
}

float Color::getStateDisabled() const
{
    return stateDisabled;
}

float Color::getStateDragged() const
{
    return stateDragged;
}

float Color::getStatePressed() const
{
    return statePressed;
}

float Color::getStateFocus() const
{
    return stateFocus;
}

float Color::getStateHover() const
{
    return stateHover;
}

QColor Color::getOutlineVariant() const
{
    return outlineVariant;
}

QColor Color::getOutline() const
{
    return outline;
}

QColor Color::getOnErrorContainer() const
{
    return onErrorContainer;
}

QColor Color::getErrorContainer() const
{
    return errorContainer;
}

QColor Color::getOnError() const
{
    return onError;
}

QColor Color::getError() const
{
    return error;
}

QColor Color::getSurfaceContainerHighest() const
{
    return surfaceContainerHighest;
}

QColor Color::getSurfaceContainerHigh() const
{
    return surfaceContainerHigh;
}

QColor Color::getSurfaceContainer() const
{
    return surfaceContainer;
}

QColor Color::getSurfaceContainerLow() const
{
    return surfaceContainerLow;
}

QColor Color::getSurfaceContainerLowest() const
{
    return surfaceContainerLowest;
}

QColor Color::getSurfaceBright() const
{
    return surfaceBright;
}

QColor Color::getSurfaceDim() const
{
    return surfaceDim;
}

QColor Color::getInverseOnSurface() const
{
    return inverseOnSurface;
}

QColor Color::getInverseSurface() const
{
    return inverseSurface;
}

QColor Color::getOnSurfaceVariant() const
{
    return onSurfaceVariant;
}

QColor Color::getSurfaceVariant() const
{
    return surfaceVariant;
}

QColor Color::getOnSurface() const
{
    return onSurface;
}

QColor Color::getSurface() const
{
    return surface;
}

QColor Color::getOnBackground() const
{
    return onBackground;
}

QColor Color::getBackground() const
{
    return background;
}

QColor Color::getOnTertiaryContainer() const
{
    return onTertiaryContainer;
}

QColor Color::getTertiaryContainer() const
{
    return tertiaryContainer;
}

QColor Color::getOnTertiary() const
{
    return onTertiary;
}

QColor Color::getTertiary() const
{
    return tertiary;
}

QColor Color::getOnSecondaryContainer() const
{
    return onSecondaryContainer;
}

QColor Color::getSecondaryContainer() const
{
    return secondaryContainer;
}

QColor Color::getOnSecondary() const
{
    return onSecondary;
}

QColor Color::getSecondary() const
{
    return secondary;
}

QColor Color::getInversePrimary() const
{
    return inversePrimary;
}

QColor Color::getOnPrimaryContainer() const
{
    return onPrimaryContainer;
}

QColor Color::getOnPrimary() const
{
    return onPrimary;
}

QColor Color::getPrimaryContainer() const
{
    return primaryContainer;
}

QColor Color::getPrimary() const
{
    return primary;
}
}
