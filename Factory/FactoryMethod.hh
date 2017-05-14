#ifndef FactoryMethod_hh
#define FactoryMethod_hh

#include <string>

//interface
class Interviewer
{
public:
    virtual void askQuestions(){};
};

//concrete class implementing interface
class Developer : public Interviewer
{
public:
    void askQuestions();
};

//concrete class implementing interface
class QaLead : public Interviewer
{
public:
    void askQuestions();
};

//abstract class at top of hierarchy
class HiringManager
{
public:
    HiringManager(std::string name, Interviewer interviewer);
    virtual ~HiringManager(){};
    virtual Interviewer* makeInterviewer()=0;
    void takeInterview();

private:
    std::string mName;
    Interviewer mInterviewer;
};

//concrete class extending abstract
class DevManager : public HiringManager
{
public:
    DevManager(std::string name,Interviewer interviewer):HiringManager(name,interviewer){}; //base constructor does all work
    Interviewer* makeInterviewer();
};

//concrete class extending abstract
class QaManager : public HiringManager
{
public:
    QaManager(std::string name,Interviewer interviewer):HiringManager(name,interviewer){}; //base constructor does all work
     Interviewer* makeInterviewer();
};

#endif
