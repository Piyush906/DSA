#include<iostream>
using namespace std;

int main(){

int arr[10];
int n = 10;

// input le lo
for(int i=0; i<n; i++){

    cin>>arr[i];
}

// double-up kr do
for(int i=0; i<n; i++){

    arr[i] = 2 * arr[i];
}
// array print kr do

for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
}

return 0;
}