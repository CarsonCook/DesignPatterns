#include "memento.hh"

EditorMemento::EditorMemento(std::string content)
{
    mContent=content;
}

std::string EditorMemento::getContent()
{
    return mContent;
}

void Editor::type(std::string words)
{
    mContent+=words;
}

std::string Editor::getContent()
{
    return mContent;
}

EditorMemento* Editor::save()
{
    return new EditorMemento(mContent);
}

void Editor::restore(EditorMemento* memento)
{
    mContent=memento->getContent();
}
