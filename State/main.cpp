#include <iostream>
#include "state.hh"

using namespace std;

int main()
{
    TextEditor* ed=new TextEditor(new UpperCase());
    ed->type("heLLo");
    ed->setState(new LowerCase());
    ed->type("heLLo");
    return 0;
}
