<<<<<<< HEAD
#include<iostream>
using namespace std;

int main ()
{
int n;
 cin>>n;

 for (int i=0; i<n-1; i++)
 {
   for(int j=i+1; j<=n; j++){

    if(j==i+1 || j== n || i == 0){
        cout<<j;
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

int main ()
{
int n;
 cin>>n;

 for (int i=0; i<n-1; i++)
 {
   for(int j=i+1; j<=n; j++){

    if(j==i+1 || j== n || i == 0){
        cout<<j;
    }
    else{
        cout<<" ";
    }
    
   }
   cout<<endl;
 }
 

>>>>>>> f10c6c85da0d562f623e05da40a4cdd3e6571564
}