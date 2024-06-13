#include<iostream>
using namespace std;

int findLength (char ch[], int size){

        int index = 0;
    while (ch[index] != '\0')
    {
        /* code */
        index++;
    }
    return index;
    
}




void reverseString(char ch[], int n){
        int i =0;
        int j = n-1;

        while (i<=j)
        {
            /* code */
            swap(ch[i], ch[j]);
            i++;
            j--;
        }
        

}



int main() {
char ch[100];
cin.getline(ch, 100);

cout<<"before "<<ch<<endl;
int len = findLength(ch, 100);

reverseString(ch, len);
cout<<"after "<<ch<<endl;


    return 0;
}