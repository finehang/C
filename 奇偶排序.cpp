#include <iostream>

using namespace std;

// 给出一组数,挑出偶数组降序排列,挑出奇数组升序排列

int main(){
    int n[]={11,12,13,14,15,16,17,18,19,20};
    int i=0,j=0,even[10],odd[10];
    int numeven=0,numodd=0,temp=0;
    for(i=0;i<10;i++){
        if(n[i]%2!=0){
            odd[numodd]=n[i];
            numodd+=1;
        }
        else{
            even[numeven]=n[i];
            numeven+=1;
        }
    }

    for(i=0;i<numeven;i++){
        for(j=i+1;j<numeven;j++){
            if(even[j]>even[i]){
                temp=even[i];
                even[i]=even[j];
                even[j]=temp;
            }
        }
    }

    for(i=0;i<numodd;i++){
        for(j=i+1;j<numodd;j++){
            if(odd[j]<odd[i]){
                temp=odd[i];
                odd[i]=odd[j];
                odd[j]=temp;
            }
        }
    }

    for(i=0;i<numeven;i++){
    cout<<even[i]<<endl;
    }
    for(i=0;i<numodd;i++){
    cout<<odd[i]<<endl;
    }
}