#include <iostream>

using namespace std;

int get_dayofweek(int n){  //获得n天后是周几
    int day=0;
    day = n % 7;
    return day;
}

int get_year(int n){  //获得年份
    int i=2000, leap=0;
    leap = (i%4==0 && i%100!=100 || i%400==0);
    while(1){
        if(leap == 1&&n>=366){
            n=n-366;
            i++;
            continue;
        }
        else if(leap == 0&&n>=365){
            n=n-365;
            i++;
            continue;
        }
        else{
            break;
        }
    }
    return i;
}


int get_month(int n){  //获得月份
    int i=2000, leap=0;
    leap = (i%4==0 && i%100!=100 || i%400==0);
    while(1){
        if(leap == 1&&n>=366){
            n=n-366;
            i++;
            continue;
        }
        else if(leap == 0&&n>=365){
            n=n-365;
            i++;
            continue;
        }
        else if(leap==1){
            int mon[12]={31,29,31,30,31,30,31,31,30,31,30,31};
            for(i=0;i<=10;i++){
                n-=mon[i];
                if(n<0){
                    return i+1;
                }
            }
        }
        else if(leap==0){
            int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            for(i=0;i<=10;i++){
                n-=mon[i];
                if(n<0){
                    return i+1;
                }
            }
        }
    }
}


int get_day(int n){  //获得日期
    int i=2000, leap=0;
    leap = (i%4==0 && i%100!=100 || i%400==0);
    while(1){
        if(leap == 1&&n>=366){
            n=n-366;
            i++;
            continue;
        }
        else if(leap == 0&&n>=365){
            n=n-365;
            i++;
            continue;
        }
        else if(leap==1){
            int mon[12]={31,29,31,30,31,30,31,31,30,31,30,31};
            for(i=0;i<=10;i++){
                n-=mon[i];
                if(n<0){
                    return n+mon[i];
                }
            }
        }
        else if(leap==0){
            int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            for(i=0;i<=10;i++){
                n-=mon[i];
                if(n<0){
                    return n+mon[i];
                }
            }
        }
    }
}

int main(){
    int n=32;
    char week[7][5] = {"Sat.", "Sun.", "Mon.", "Tue", "Wed.", "Thu.", "Fri."};
    cout<<"week is "<<week[get_dayofweek(n)]<<endl;
    cout<<"year is "<<get_year(n)<<endl;
    cout<<"mon is "<<get_month(n)<<endl;
    cout<<"day is "<<get_day(n)<<endl;
}