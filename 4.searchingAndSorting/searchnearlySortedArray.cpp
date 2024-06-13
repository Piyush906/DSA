#include<iostream>
using namespace std;
             int searchNearlySortedArray(int arr[], int target, int n){
                        int s =0;
                         int e = n-1;

                         int mid = s+(e-s)/2;

                         while (s<=e)
                         {
                           if (mid-1>=0  && arr[mid-1] == target)
                           {
                            return mid-1;
                           }
                           if (arr[mid] == target)
                           
                            return mid;
                           
                           if (arr[mid+1] == target)
                           
                            return mid+1;
                           
                           if (target> arr[mid])
                           {
                            /* code */
                            s = mid +2;
                           }else{
                            e = mid-2;
                           }
                           mid = s+ (e-s)/2;
                         }
                         return -1;

             }
int main(){
            int arr[] = {20, 10, 30, 50, 40, 70, 60};

            int n = 7;

            int target = 10;

        int targetIndex = searchNearlySortedArray(arr, n, target);

            if (targetIndex == -1)
            {
               cout<<"element is not found"<<endl;
            }else{
                cout<<"element is found at index :"<<targetIndex<<endl;
            }
            
    return 0;
}