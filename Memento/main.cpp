#include <iostream>
#include "memento.hh"

using namespace std;

int main()
{
    Editor* ed=new Editor();
    ed->type("hi there");
    cout << ed->getContent() << endl;
    EditorMemento* mem=ed->save();
    ed->type(" my name is...");
    cout << ed->getContent() << endl;
    ed->restore(mem);
    cout << ed->getContent() << endl;
    delete ed; delete mem;
    return 0;
}
