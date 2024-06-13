#include<iostream>
using namespace std;

        int findoddOccuringElement(int arr[], int n){

            int s =0;
            
            int e = n-1;

            int mid = s + (e-s)/2;

                while (s<=e)
                {
                    /* single element */
                    if (s==e){
                        return s;
                    }
                    if (mid & 1) /*to check odd or even quickly*/
                    
                    {
                        if (mid-1>=0 && arr[mid-1]==arr[mid]){

                            s = mid +1;//right me jao
                        }else {
                            e = mid-1;//left me jao
                        }
                        
                        
                    }else {
                        //even
                        if(mid+1 <n && arr[mid] == arr [mid+1]){
                            // right me jao
                            s = mid +2;
                        }else {
                            // ya to me right part pe khada hu 
                            // ya to me ans k upr khada hu
                            // that's why e = mid kr rha hu
                            // kyuki e = mid -1 se ans lost ho skta h
                            e = mid;
                        }
                    }
                    mid = s+ (e-s)/2;

                }
                return -1;
        }

int main(){
            int arr[] = {10, 10, 2, 2, 3, 3, 2, 5, 5, 6, 6, 7, 7};
            int n = 13;

            int ansIndex = findoddOccuringElement(arr, n);

            cout<<"final ans is :"<<ansIndex<<endl;

    return 0;
}