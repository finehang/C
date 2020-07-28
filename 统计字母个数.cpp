#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    char str[40] = {"a bddf dvdv v    s"};
    int flag = 0, num = 0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            flag = 0;  //是空格则置为1
        }
        else if(flag == 0){
            num ++;  //flag为1且字母不为空格则是一个单词的首字母
            flag=1;  //置为0
        }
    }
    cout<<num<<endl;
}