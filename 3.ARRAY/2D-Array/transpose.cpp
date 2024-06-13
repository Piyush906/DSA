#include<iostream>
using namespace std;

void printArray(int arr[][3], int row, int col){

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col  ; j++)
        {
            /* code */
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

void transpose (int arr[][3], int row, int col){
     for (int i = 0; i < row; i++)
     {
        /* code */
        
        for (int j = i; j < col; j++)
        {
            /* code */
            swap(arr[i][j], arr[j][i]);
        }
       
     }
     
}

int main(){

            int arr[3][3] = {
                {10, 11, 12},
                {14, 15, 16},
                {18, 19, 20}
            };

            int row = 3;
            int col =3;
                cout<<"printing before transpose"<<endl;
                
            printArray(arr, row, col);

            transpose(arr, row, col);

            cout<<"printing before transpose"<<endl;

            printArray(arr, row, col);

    return 0;
}