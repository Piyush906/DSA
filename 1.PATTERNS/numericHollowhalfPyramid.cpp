<<<<<<< HEAD
#include<iostream>
using namespace std;

int main () {

        int n;
        cin>>n;
        for(int row=0; row<n; row++){

            for(int col=0; col<=row; col++){

                if (col==0 || col == row || row == n-1)
                {
                    cout<<col+1;
                }
              else{
                cout<<" ";
            
                 }   
              
            }
            cout<<endl;
        }


    
=======
#include<iostream>
using namespace std;

int main () {

        int n;
        cin>>n;
        for(int row=0; row<n; row++){

            for(int col=0; col<=row; col++){

                if (col==0 || col == row || row == n-1)
                {
                    cout<<col+1;
                }
              else{
                cout<<" ";
            
                 }   
              
            }
            cout<<endl;
        }


    
>>>>>>> f10c6c85da0d562f623e05da40a4cdd3e6571564
}