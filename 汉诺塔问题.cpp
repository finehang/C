#include <iostream>

using namespace std;

int i =0;

void move(char m, char n){
    cout<<"把一个盘子从"<<m<<"移动到"<<n<<endl;
    i++;
    cout<<i<<endl;
}

void hanoi(int m, char x, char y, char z){
    if(m==1){
        move(x,z);
    }
    else{
        hanoi(m-1, x, z, y);
        move(x,z);
        hanoi(m-1, y, x, z);
    }
}

int main(){
    int n=10;
    hanoi(n,'A','B','C');
    // cout<<i<<endl;
}