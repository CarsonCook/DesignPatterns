#include "state.hh"
#include <iostream>
#include <string>

void UpperCase::write(std::string words)
{
    for (int i=0; i<words.length(); i++)
    {
        words[i]=(char)std::toupper(words[i]);
    }
    std::cout << words << std::endl;
}

void LowerCase::write(std::string words)
{
    for (int i=0; i<words.length(); i++)
    {
        words[i]=(char)std::tolower(words[i]);
    }
    std::cout << words << std::endl;
}

TextEditor::TextEditor(WritingState* state)
{
    mState=state;
}

void TextEditor::setState(WritingState* state)
{
    mState=state;
}

void TextEditor::type(std::string words)
{
    mState->write(words);
}
