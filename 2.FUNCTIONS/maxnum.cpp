    #include <iostream>
    using namespace std;

        void printmaximum ( int num1, int num2, int num3){

                int ans1 = max ( num1, num2);

                int finalAns =  max (ans1, num3);
                    
                    cout << finalAns << endl;
                
            }

    int main() {
                 printmaximum (43, 56, 98);

   


    return 0;
    }