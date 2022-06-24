#include"bits/stdc++.h"
using namespace std;

int main()
{
   int T;
   cin>>T;
   for(int i = 0; i < T; i++){
       int K, counting = 0;
       cin>>K;
       while(K != 1)
       {
           if(K % 2 == 0){
                counting++;
                K = K/2;
           }
           else{
               break;
           }
      
       }
       cout<<counting<<endl;
   }

    return 0;
}
