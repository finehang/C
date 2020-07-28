#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    int a=0;
    short b;
    long c = 2;
    cout<<a<<' '<<(1+a++)+(a)<<' '<<a<<endl;
    cout<<b<<endl;
    cout<<(typeid(5/3.0).name())<<endl;
    return 0;
}