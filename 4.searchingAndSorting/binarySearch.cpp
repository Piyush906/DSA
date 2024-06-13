#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){

        int start = 0;

        int end = n-1;

        int mid = (start + end)/2;

        while (start<=end)
        {
            /* code */if (arr[mid] == target)
            {
                return mid;
            }
            else if(target> arr[mid]){
                start = mid + 1;
            }

            else if(target<arr[mid]){

                end = mid-1;
            }

            mid = (start + end)/2;
        }

        return -1;
        
}


int main () {

        int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

        int n = 9;

        int target = 70;

        int ansIndex = binarySearch(arr, n, target);

        if (ansIndex == -1)
        {
            /* code */cout<<"element not found"<<endl;
        }else{

            cout<<"element has been found at index: "<<ansIndex<<endl;

        }
        

            return 0;

}