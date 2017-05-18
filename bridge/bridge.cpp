#include <string>
#include "bridge.hh"

Theme::Theme(int intensity)
{
    mIntensity=intensity;
}

int Theme::getIntensity()
{
    return mIntensity;
}

DarkTheme::DarkTheme(int intensity):Theme(intensity){};

LightTheme::LightTheme(int intensity):Theme(intensity){};

std::string LightTheme::getType()
{
    return "light";
}

std::string DarkTheme::getType()
{
    return "dark";
}
