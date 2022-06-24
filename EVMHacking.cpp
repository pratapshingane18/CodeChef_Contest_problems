#include<bits/stdc++.h>
using namespace std;

int main(){
int Test;
cin>>Test;

for (int i = 0; i < Test; i++)
{
   

    int a,b,c,p,q,r;
    cin>>a>>b>>c>>p>>q>>r;
    
    int x,y,z, Total;
    x = p+q+r;
    y= a+b+c;
    z= x/2;
    if(y > z)
    {
        cout<<"yes"<<endl;
    }
    else{
        Total = max((a+b+r),(a+c+q),(p+b+c));
        if(Total > z)
        {
            cout<<"Yes"<<endl;

        }

        else{
            cout<<"No"<<endl;
        }
        
    }
      
}
return 0;
}