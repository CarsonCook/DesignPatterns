#include <iostream>
#include "observer.hh"

using namespace std;

int main()
{
    JobSeeker carson("Carson"), bob("Bob");
    JobPost dev("Dev"), qa("QA");
    JobPostings postings;
    postings.attach(carson);
    cout << "Dev added: " << endl;
    postings.addJob(dev); //notice how they are notified on the job being posted
    postings.attach(bob); //notice how bob wasn't notified for dev, but will be for QA
    cout << endl << "QA added: " << endl;
    postings.addJob(qa);
    return 0;
}
