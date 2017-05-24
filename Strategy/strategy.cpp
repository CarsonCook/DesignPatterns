#include "strategy.hh"

int* BubbleSortStrategy::sortArray(int* arr,int arrSize)
{
    for (int i=0; i<arrSize-1; i++)
    {
        for (int j=0; j<arrSize-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}

int* InsertionSortStrategy::sortArray(int* arr, int arrSize)
{
    for (int i=0; i<arrSize; i++)
    {
        int j=i;
        while (j>0 && arr[j]<arr[j-1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--;
        }
    }
    return arr;
}

Sorter::Sorter(SortStrategy* sortStrat)
{
    mStrat=sortStrat;
}

int* Sorter::sortArray(int* arr, int arrSize)
{
    return mStrat->sortArray(arr,arrSize);
}
