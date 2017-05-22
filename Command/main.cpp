#include <iostream>
#include "command.hh"

using namespace std;

int main()
{
    Bulb bulb;
    TurnOff* off=new TurnOff(bulb);
    TurnOn* on=new TurnOn(bulb);
    Control control;
    control.submit(on);
    control.undo(on);
    control.redo(on);
    control.submit(off);
    control.undo(off);
    control.redo(off);
    delete off; delete on;
    return 0;
}
