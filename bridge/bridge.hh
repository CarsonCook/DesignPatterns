#ifndef bridge_hh
#define bridge_hh

#include <string>

class Theme
{
public:
    Theme(int intensity);
    virtual std::string getType()=0;
    int getIntensity();
private:
    int mIntensity;
};

class LightTheme : public Theme
{
public:
    LightTheme(int intensity);
    std::string getType();
};

class DarkTheme : public Theme
{
public:
    DarkTheme(int intensity);
    std::string getType();
};

class WebPage
{
public:
    WebPage(std::string name, Theme* theme);
    std::string getName();
    virtual std::string getType()=0;
private:
    std::string mName;
};

class InfoPage
{
    //public
};

#endif //bridge_hh
