#ifndef observer_hh
#define observer_hh

#include <string>
#include <vector>

class JobPost
{
public:
    JobPost(std::string title);
    std::string getTitle();
private:
    std::string mTitle;
};

class JobSeeker
{
public:
    JobSeeker(std::string name);
    void onJobPosted(JobPost post);
private:
    std::string mName;
};

class JobPostings
{
public:
    void attach(JobSeeker seeker);
    void addJob(JobPost post);
private:
    void notify(JobPost post);
    std::vector<JobSeeker> mSeekers;
};

#endif // observer_hh
