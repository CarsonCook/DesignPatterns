#include <iostream>
#include "complexhierarchy.hh"
#include "bridge.hh"

using namespace std;

int main()
{
    //this method uses a hierarchy of webpage->light/dark->info/media, giving 7 total classes and 4 endpoints
    //as seen in comlexhierarhcy.cpp (and even in the .hh), there are a lot of classes methods to keep track of.
    DarkInfoWebPage diw("darkInfo",5,"hello");
    DarkMediaWebPage dmw("darkMedia",5,"cool pic");
    LightInfoWebPage liw("lightInfo",10,"hey");
    LightMediaWebPage lmw("lightMedia",10,"nice pic");
    diw.printPage(); dmw.printPage(); liw.printPage(); lmw.printPage();

    //now we use the bridge pattern to split the classes up and make it a more manageable system
    //now we have two hierarchies, each with 3 classes. There are still 4 endpoints here, but
    //with larger systems there are less (e.g., with a 1->3->3 hierarchy, there would normally
    //be 19 classes with 9 endpoints, but with bridge only 8 and 6.
    LightTheme lt(10);
    DarkTheme dt(5);
    InfoPage* ip=new InfoPage("info",&lt);
    MediaPage* mp=new MediaPage("media",&dt);
    ip->printPage();
    mp->printPage();
    delete ip; delete mp;
    return 0;
}
