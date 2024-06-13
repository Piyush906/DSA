#include <iostream>
using namespace std;

void shiftNegativeOneSide (int arr[], int n){

            int j = 0;

            for (int index = 0; index < n; index++)
            {
                /* code */
                if (arr[index] < 0)
                {
                    /* code */
                    swap(arr[index], arr[j]);
                    j++;
                }
                
            }
            


}

int main(){

        int arr[] = {11, 23, -45, -74, 75, 34};

        int n = 6;

        shiftNegativeOneSide(arr,  n)



    return 0;
}