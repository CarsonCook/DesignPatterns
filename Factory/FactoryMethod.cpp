#include <string>
#include <iostream>
#include "FactoryMethod.hh"

void Developer::askQuestions()
{
    std::cout << "some great questions about design patterns" << std::endl;
}

void QaLead::askQuestions()
{
    std::cout << "some great questions about testing" << std::endl;
}

HiringManager::HiringManager(std::string name, Interviewer interviewer)
{
    mName=name;
    mInterviewer=interviewer;
}

void HiringManager::takeInterview()
{
    makeInterviewer()->askQuestions();
}

Interviewer* DevManager::makeInterviewer()
{
    return new Developer();
}

Interviewer* QaManager::makeInterviewer()
{
    return new QaLead();
}



