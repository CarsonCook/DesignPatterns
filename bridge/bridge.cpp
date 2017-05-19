#include <string>
#include <iostream>
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

void LightTheme::printTheme()
{
    std::cout << "light " << getIntensity() << std::endl;
}

void DarkTheme::printTheme()
{
    std::cout << "dark " << getIntensity() << std::endl;
}

std::string LightTheme::getType()
{
    return "light";
}

std::string DarkTheme::getType()
{
    return "dark";
}

WebPageBridge::WebPageBridge(std::string name, Theme* theme)
{
    mName=name;
    mTheme=theme;
}

WebPageBridge::~WebPageBridge()
{
    std::cout << mTheme << std::endl;
    if (mTheme!=nullptr)
    {
        std::cout << "SDF" << std::endl;
        //delete mTheme;
    }
}

std::string WebPageBridge::getName()
{
    return mName;
}

Theme* WebPageBridge::getTheme()
{
    return mTheme;
}

InfoPage::InfoPage(std::string name, Theme* theme):WebPageBridge(name,theme){};

MediaPage::MediaPage(std::string name, Theme* theme):WebPageBridge(name,theme){};

void InfoPage::printPage()
{
    std::cout << getName() << " info ";
    getTheme()->printTheme();
}

void MediaPage::printPage()
{
    std::cout << getName() << " media ";
    getTheme()->printTheme();
}

std::string MediaPage::getType()
{
    return "media";
}

std::string InfoPage::getType()
{
    return "info";
}
