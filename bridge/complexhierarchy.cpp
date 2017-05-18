#include "complexhierarchy.hh"

WebPage::WebPage(std::string name)
{
    mName=name;
}

void WebPage::setName(std::string name)
{
    mName=name;
}

std::string WebPage::getName()
{
    return mName;
}

LightWebPage::LightWebPage(std::string name,int lightness):WebPage(name)
{
    mLightness=lightness;
}

void LightWebPage::setLightness(int lightness)
{
    mLightness=lightness;
}

int LightWebPage::getLightness()
{
    return mLightness;
}

LightInfoWebPage::LightInfoWebPage(std::string name, int lightness, std::string info):LightWebPage(name,lightness)
{
    mInfo=info;
}

void LightInfoWebPage::setInfo(std::string info)
{
    mInfo=info;
}

std::string LightInfoWebPage::getInfo()
{
    return mInfo;
}

LightMediaWebPage::LightMediaWebPage(std::string name, int lightness, std::string pic):LightWebPage(name,lightness)
{
    mPic=pic;
}

void LightMediaWebPage::setPic(std::string pic)
{
    mPic=pic;
}

std::string LightMediaWebPage::getPic()
{
    return mPic;
}

DarkWebPage::DarkWebPage(std::string name,int darkness):WebPage(name)
{
    mDarkness=darkness;
}

void DarkWebPage::setDarkness(int darkness)
{
    mDarkness=darkness;
}

int DarkWebPage::getDarkness()
{
    return mDarkness;
}

DarkInfoWebPage::DarkInfoWebPage(std::string name, int darkness, std::string info):DarkWebPage(name,darkness)
{
    mInfo=info;
}

void DarkInfoWebPage::setInfo(std::string info)
{
    mInfo=info;
}

std::string DarkInfoWebPage::getInfo()
{
    return mInfo;
}

DarkMediaWebPage::DarkMediaWebPage(std::string name, int darkness, std::string pic):DarkWebPage(name,darkness)
{
    mPic=pic;
}

void DarkMediaWebPage::setPic(std::string pic)
{
    mPic=pic;
}

std::string DarkMediaWebPage::getPic()
{
    return mPic;
}
