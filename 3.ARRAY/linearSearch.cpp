#include<iostream>
using namespace std;

int main () {

int arr[5] = {1, 2, 3, 4, 5};

int target = 6;

int n = 5;

bool flag = 0;

for(int i =0; i<n; i++){

    if(arr[i] == target){
        //found
        flag = 1;

        break;
    }
}
        if(flag == 1){
            
            cout<<"target found";
        }else
        {
            cout<<"target not found"<<endl;
        }



    return 0;
}