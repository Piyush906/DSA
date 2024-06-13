#include<iostream>
using namespace std;

void colWiseSum (int arr[][4], int row, int col){
     for (int i = 0; i < col; i++)
     {
        /* code */
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            /* code */
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
     }
     
}

int main(){

            int arr[3][4] = {
                {10, 11, 12, 13},
                {14, 15, 16, 17},
                {18, 19, 20, 21}
            };

            int row = 3;
            int col =4;

            colWiseSum(arr, row, col);

    return 0;
}