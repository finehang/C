#include <iostream>

using namespace std;

int main()
{
    int n = 5, m = 1, i = 0;
    for ( i = 1; i <= n; i++){
        m += i;
    }
    cout<<"最多可切"<<m<<"块"<<endl;
    return 0;
}
