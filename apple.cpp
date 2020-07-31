#include <iostream>

using namespace std;

int count(int m, int n){
    if(m<=1 || n<=0){
        return 1;
    }
    if(m<n){
        return count(m, m);
    }
    else{
        return count(m, n-1) + count(m-n, n);
    }
}



int main(){
    cout<<count(7, 3)<<"\n";
}