#ifndef complexhierarchy_hh
#define complexhierarchy_hh

#include <string>

class WebPage
{
public:
    WebPage(std::string name);
    void setName(std::string);
    std::string getName();
private:
    std::string mName;
};

class DarkWebPage : public WebPage
{
public:
    DarkWebPage(std::string name,int darkness);
    void setDarkness(int);
    int getDarkness();
private:
    int mDarkness;
};

class DarkInfoWebPage : public DarkWebPage
{
public:
    DarkInfoWebPage(std::string name, int darkness, std::string info);
    void setInfo(std::string);
    std::string getInfo();
    void printPage();
private:
    std::string mInfo;
};

class DarkMediaWebPage : public DarkWebPage
{
public:
    DarkMediaWebPage(std::string name, int darkness, std::string pic);
    void setPic(std::string);
    std::string getPic();
    void printPage();
private:
    std::string mPic;
};

class LightWebPage : public WebPage
{
public:
    LightWebPage(std::string name, int lightness);
    void setLightness(int);
    int getLightness();
private:
    int mLightness;
};

class LightInfoWebPage : public LightWebPage
{
public:
    LightInfoWebPage(std::string name, int lightness, std::string info);
    void setInfo(std::string);
    std::string getInfo();
    void printPage();
private:
    std::string mInfo;
};

class LightMediaWebPage : public LightWebPage
{
public:
    LightMediaWebPage(std::string name, int lightness, std::string pic);
    void setPic(std::string);
    std::string getPic();
    void printPage();
private:
    std::string mPic;
};

#endif // complexhierarchy_hh
