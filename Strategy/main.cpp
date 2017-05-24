#include <iostream>
#include "strategy.hh"

using namespace std;

int main()
{
    int arr[4]={6,14,8,1};
    Sorter bubbleSort(new BubbleSortStrategy());
    Sorter insertionSort(new InsertionSortStrategy());
    for (int i=0; i<4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Bubble sort:" << endl;
    int* sortedArr=bubbleSort.sortArray(arr,4);
    for (int i=0; i<4; i++)
    {
        cout << sortedArr[i] << " ";
    }
    cout << endl << "Insertion sort:" << endl;
    sortedArr=insertionSort.sortArray(arr,4);
    for (int i=0; i<4; i++)
    {
        cout << sortedArr[i] << " ";
    }
    cout << endl;
    return 0;
}
