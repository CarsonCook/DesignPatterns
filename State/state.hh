#ifndef state_hh
#define state_hh

#include <string>

class WritingState
{
public:
    virtual void write(std::string words)=0;
};

class UpperCase : public WritingState
{
public:
    void write(std::string words);
};

class LowerCase : public WritingState
{
public:
    void write(std::string words);
};

class TextEditor
{
public:
    TextEditor(WritingState* state);
    void setState(WritingState* state);
    void type(std::string words);
private:
    WritingState* mState;
};

#endif //state_hh
