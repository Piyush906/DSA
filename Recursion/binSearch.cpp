#include<iostream>
using namespace std;

int binSearch(int arr[], int s, int e, int target){
            //base case
            if(s>e){
                //element not found
                return -1;
            }

            //Processing
            int mid = s + (e-s)/2;
            if(arr[mid] == target){
                return mid;
            }
            
            //ab recursion sambhalega
            if(arr[mid]<target){
                //right me jao
            return binSearch(arr, mid+1,e, target);
            
            }else{
                //left me jao
                return binSearch(arr, mid-1,e, target);
            }

}




int main(){
            int arr[] = {10,20,30,40,50,60,70,80};
            int size = 8;
            int s =0;
            int e =size-1;
            int target = 80;

          int foundIndex = binSearch(arr,s,e,target);

            if(foundIndex!=-1){
                cout<<"target is found at index "<<foundIndex<<endl;
            }else{
                cout<<"target is not foundat index "<<foundIndex<<endl;
            }


    return 0;
}