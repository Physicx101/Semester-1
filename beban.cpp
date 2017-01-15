#include <iostream>

using namespace std;
int main (){
    int m,b;
    cin>>b;
    
    while (b>0)
    {
        m=1;
        while (m*2<=b)
        {
            m = m*2;
        }
        cout<<m<<endl;
        b = b-m;
    }
}