#include<iostream>
using namespace std;


// is ques me hme given array me se unique no. find krna h jiske liye hmne 
// xor lgaya h


int getUnique(int arr[], int n){

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        ans = ans^arr[i];

        return ans;
    }
    
}
int main () {

int arr[] = { 1, 12, 12, 13, 13, 14, 14, 17, 17};
 
 int n = 9;

 int finalAns = getUnique(arr, n);

        cout<<"fianl answer is : "<<finalAns<<endl;
    return 0;
}