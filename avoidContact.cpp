#include<bits/stdc++.h>
using namespace std;

int main(){
int Test;
cin>>Test;

for (int i = 0; i < Test; i++)
{
    int X,Y;
    cin>>X>>Y;

    int NUM;
  
    if(Y==0){
        NUM = X;
    }

    else if(X==Y){
        NUM = (2*Y) -1;

    }

    else{
          NUM = (2*Y) + (X-Y);
    }
    cout<<NUM<<endl;

}

return 0;
}