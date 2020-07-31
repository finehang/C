#include <iostream>

using namespace std;

char str[100]={'*+11.012.0+24.025.0'};

float natation(){
    switch(str[0]){
        case '+':return natation() + natation();
        case '-':return natation() - natation();
        case '*':return natation() * natation();
        case '/':return natation() / natation();
        default:return atof(str);
    }
}


int main(){
    cout<<natation()<<endl;
}