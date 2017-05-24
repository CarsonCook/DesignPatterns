#include "observer.hh"
#include <string>
#include <vector>
#include <iostream>

JobPost::JobPost(std::string title)
{
    mTitle=title;
}

std::string JobPost::getTitle()
{
    return mTitle;
}

JobSeeker::JobSeeker(std::string name)
{
    mName=name;
}

void JobSeeker::onJobPosted(JobPost post)
{
    std::cout << mName << " is applying for " << post.getTitle() << std::endl;
}

void JobPostings::attach(JobSeeker seeker)
{
    mSeekers.push_back(seeker);
}

void JobPostings::addJob(JobPost post)
{
    notify(post);
}

void JobPostings::notify(JobPost post)
{
    for (JobSeeker seeker:mSeekers)
    {
        seeker.onJobPosted(post);
    }
}
