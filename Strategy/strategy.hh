#ifndef strategy_hh
#define strategy_hh

class SortStrategy
{
public:
    virtual int* sortArray(int* arr, int arrSize)=0;
};

class BubbleSortStrategy : public SortStrategy
{
public:
    int* sortArray(int* arr, int arrSize);
};

class InsertionSortStrategy : public SortStrategy
{
public:
    int* sortArray(int* arr, int arrSize);
};

class Sorter
{
public:
    Sorter(SortStrategy* sortStrat);
    int* sortArray(int* arr, int arrSize);
private:
    SortStrategy* mStrat;
};

#endif // strategy_hh
