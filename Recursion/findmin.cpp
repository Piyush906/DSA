#include<iostream>
#include<limits.h>
using namespace std;


void findmin (int arr[], int size, int index, int &mini){

    //base case
    if(index>= size){
        return;
    }
    //Processing
    mini = min(mini, arr[index]);
    // recursive call
    findmin(arr, size, index+1, mini);
}
int main() {
            int arr[] = {10,20,30,40,50};
            int size = 5;
            int index = 0;
            int mini = INT_MAX;

            findmin(arr, size, index, mini);
            cout<<"minimum number in array is"<<mini<<endl;


    return 0;
}