#include<iostream>
using namespace std;

        bool searchArray (int arr[], int size, int index, int target) {
            //base case
            if(index>=size){
                return false;
            }

            if(arr[index] == target) {
                return true;
            }
            //recursive call
            bool aagekaAns = searchArray(arr, size, index+1, target);
            return aagekaAns;

        }



int main () {

            int arr [] = {10,20,30,40,50};
            int size = 5;
            int index = 0;
            int target = 30;

            cout<<"target found or not "<<searchArray(arr, size,index, target)<<endl;


    return 0;
}