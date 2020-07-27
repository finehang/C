#include <iostream>

using namespace std;

// 一只小鸡0.5元,一只公鸡2元,一只母鸡3元,现有100元,买100只鸡,共有多少种方案?

int main(){
    int i=1,j=1,l=1;
    for(i=1;i<=33;i++){
        for(j=1;j<=50;j++){
            for(l=1;l<=100;l++){
                if (i+j+l == 100 and 3*i+2*j+0.5*l == 100){
                    cout<<"可买"<<i<<"只母鸡"<<j<<"只公鸡"<<l<<"只小鸡"<<endl;
                }
            }
        }
    }
}