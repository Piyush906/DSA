#include<iostream>
using namespace std;

            void printPermutation(string str, int index) {
                        if(index>= str.length()){

                            cout<<str<<" ";
                            return;
                        }

                        for (int j= index; j <str.length(); j++)
                        {
                            /* code */
                            swap(str[index], str[j]);

                            printPermutation(str, index+1);
                        }
                        



            }

int main () {
            string str = "abc";

            int index = 0;

            printPermutation(str, index);

    return 0;
}