#include <iostream>

using namespace std;

int main(){
    int a[] = {12,34,32,45,36,57,45,28,78,65,332,56};
    int i=0,j=0,temp=0;
    for(i=0;i<11;i++){
        for(j=i+1;j<12;j++){
            if(a[j]>a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<12;i++){
        cout<<a[i]<<endl;
    }
}