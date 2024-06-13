#include<iostream>
#include<string>
using namespace std;

void subSequence (string str, string output, int index){
    //base case
    if(index>=str.length()){
    //ans output string me build ho chuka h
    cout<<output<<endl;
    return;
    }

    char ch = str[index];

    //exclude
        subSequence(str, output, index+1);
    //include
    //output string me ch character ko inclde kro
    output.push_back(ch);
    subSequence(str, output, index+1);
}

int main(){
        string str = "abc";

        string output = "";
        int index = 0;
        subSequence(str, output, index);

    return 0;
}