#include<bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin>>test;

    while(test--)
    {
        int X,Y,Z;
        cin>>X>>Y>>Z;

       int res;
       res = (Z-Y)/X;
       cout<<res<<endl;
    }
    return 0;
}