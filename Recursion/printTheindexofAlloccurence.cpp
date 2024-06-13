#include<iostream>
using namespace std;

        void printIndex (int arr[], int size, int index, int target){

                    //base case
            if (index >= size)
            {
                /* code */
                return ;
            }
            // processing
            if(arr[index] == target){
            cout<<index<< " ";
            }

            // Recursive call
            printIndex(arr, size, index+1, target);
        }



int main () {

            int arr [] = {10,20,20,40,50};
            int size = 5;
            int index = 0;
            int target = 20;

            printIndex(arr, size, index, target);


    return 0;
}