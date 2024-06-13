#include<iostream>
using namespace std;

        int getQuotient(int divisor, int dividend){

            int s =0;

            int e = dividend;

            int mid = s + (e-s)/2;

            int ans = -1;

            while (s<= e)
            {
                /* code */
                if (mid*divisor == dividend)
                {
                    /* code */
                    return mid;
                }
                if (mid*divisor < dividend)
                {
                    /* code */
                    ans = mid;

                    s= mid+1;
                }
                else{
                    e= mid -1;
                }
                mid = s+ (e-s)/2;
                
                
            }
            return ans;


        }


int main () {

        int divisor = 8;

        int dividend = 29;

        int ans = getQuotient(divisor, dividend);

        cout<<"final answer is :"<<ans<<endl;


    return 0;
}