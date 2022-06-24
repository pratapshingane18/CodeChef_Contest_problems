#include"bits/stdc++.h"
using namespace std;
int main()
{
    int T,Xa,Xb,Xc;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        cin>>Xa>>Xb>>Xc;

        if(Xa > 50){
        cout<<"A"<<endl;
    }

    else if(Xb > 50){
        cout<<"B"<<endl;
    }
    else if(Xc > 50){
        cout<<"C"<<endl;
    }

    else
    {
        cout<<"NOTA"<<endl;
    }
    }
    

    

    return 0;
}
