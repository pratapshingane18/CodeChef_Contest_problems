#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Test;
    cin>>Test;

    for (int i = 0; i < Test; i++)
    {
        int X, Y , Z, Pur, Sell, Prof;

        cin>>X>>Y>>Z;

        Pur = X*Y;
        Sell = X*Z;

        Prof = Sell - Pur;
        cout<<Prof<<endl;



    }
    
    return 0;
}
