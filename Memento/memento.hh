#ifndef memento_hh
#define memento_hh

#include <string>

class EditorMemento
{
public:
    EditorMemento(std::string content);
    std::string getContent();
private:
    std::string mContent;
};

class Editor
{
public:
    void type(std::string words);
    std::string getContent();
    EditorMemento* save();
    void restore(EditorMemento* memento);
private:
    std::string mContent;
};

#endif // memento_hh
