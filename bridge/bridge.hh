#ifndef bridge_hh
#define bridge_hh

#include <string>
class Theme
{
public:
    Theme(int intensity);
    virtual ~Theme(){};
    virtual std::string getType()=0;
    virtual void printTheme()=0;
    int getIntensity();
private:
    int mIntensity;
};

class LightTheme : public Theme
{
public:
    LightTheme(int intensity);
    std::string getType();
    void printTheme();
};

class DarkTheme : public Theme
{
public:
    DarkTheme(int intensity);
    std::string getType();
    void printTheme();
};

class WebPageBridge
{
public:
    WebPageBridge(std::string name, Theme* theme);
    virtual ~WebPageBridge();
    std::string getName();
    Theme* getTheme();
    virtual std::string getType()=0;
    virtual void printPage()=0;
private:
    std::string mName;
    Theme* mTheme;
};

class InfoPage : WebPageBridge
{
public:
    InfoPage(std::string name, Theme* theme);
    ~InfoPage(){};
    void printPage();
    std::string getType();
};

class MediaPage : WebPageBridge
{
public:
    MediaPage(std::string name, Theme* theme);
    ~MediaPage(){};
    void printPage();
    std::string getType();
};

#endif //bridge_hh
