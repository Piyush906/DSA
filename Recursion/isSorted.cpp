#include<iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index){
            //base case
            if(index>=size){
                return true;
            }

            //Processing
            if(arr[index]>arr[index-1]){
            //aage check krna pdega
            //ab recursion sambhalega
            bool aagekaAns = checkSorted(arr, size, index+1);
            return aagekaAns;
            }else{
                //sorted nahi h 
                return false;
            }

}



int main(){
            int arr[] = {10,20,30,40,50};
            int size = 5;
            int index =1;
            bool isSorted = checkSorted(arr,size,index);

            if(isSorted){
                cout<<"array is sorted"<<endl;
            }else{
                cout<<"array is not sorted"<<endl;
            }


    return 0;
}