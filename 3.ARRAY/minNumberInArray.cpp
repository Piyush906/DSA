#include<iostream>
#include<limits.h>
using namespace std;

int findMinimumInArray (int arr[], int size) {

    int minAns = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        /* code */
        if (arr[i]<minAns)
    {
        minAns = arr[i];
    }
    
    }
    return minAns;
}

    

int main () {

        int arr[] = {1, 45, 32,76};

         int size = 4;

         int minimum = findMinimumInArray(arr, size);

         cout<<"your minimum number in an array is "<<minimum<<endl;


    return 0;
}