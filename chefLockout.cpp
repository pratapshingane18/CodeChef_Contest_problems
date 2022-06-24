#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Test;
    cin>>Test;

    for (int i = 0; i < Test; i++)
    {
        int A,B,C;
        cin>>A>>B>>C;

        if(((A+B) == C) || ((A+C) == B) || ((B+C) == A))
        {
            cout<<"Yes"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}
