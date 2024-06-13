#include<iostream>
using namespace std;
            void convertToUpper(char ch[], int n){
                        int index = 0;

                        char currCharacter = '\0';
                       
                        while (ch[index] != '\0' ){
                        currCharacter = ch[index];
                        
                            /* code */
                            if (currCharacter >='a' && currCharacter <='z')
                            {
                                /* code */
                                ch[index] = currCharacter - 'a' + 'A';
                            }
                            index++;
                            
                        }
                    
            }
int main() {

    char ch[100];

    cin.getline(ch, 100);

    cout<<"before :"<<ch<<endl;
    convertToUpper(ch, 100);
    cout<<"after :"<<ch<<endl;

    return 0;
}