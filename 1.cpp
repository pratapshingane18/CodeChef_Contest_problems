#include"bits/stdc++.h"
using namespace std;
int main()
{
    int T,Xa,Xb,Xc;
    cin>>T;
    cout<<endl;

    cin>>Xa;
    cout<<" ";
    cin>>Xb;
    cout<<" ";
    cin>>Xc;
    cout<<" ";
    cout<<endl;

    if(Xa > T/2){
        cout<<"A"<<endl;
    }

    if(Xb > T/2){
        cout<<"B"<<endl;
    }
    if(Xc > T/2){
        cout<<"C"<<endl;
    }

    else{
        cout<<"NOTA"<<endl;
    }

    return 0;
}
