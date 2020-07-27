#include <iostream>

using namespace std;

int main(){
    int n = 92;
    if(n%2!=0){
        cout<<"不可能"<<endl;
    }
    else if(n%4!=0){
        cout<<"最少"<<n/4+1<<"只"<<"最多"<<n/2<<"只"<<endl;
    }
    else{
        cout<<"最少"<<n/4<<"只"<<"最多"<<n/2<<"只"<<endl;
    }
}