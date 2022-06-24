#include<iostream>
#include<string>

using namespace std;



int main(){
int Test;
cin>>Test;

for (int i = 0; i < Test; i++)
{

    int N, K,count;
    cin>>N>>K;

    string Palin;
    cin>>Palin;

    for (int i = 0; i < N/2; i++)
    {
      if(Palin[i] != Palin[N-i-1])
      {
          count += 1;
      }
    

    else if(K > count)
    {
        if((K - count)%2 == 0 ){
            cout<<"Yes"<<endl;
        }
        else if(N%2 ==0){
            cout<<"YEs"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

    else{
        cout<<"No"<<endl;
    }
    

   


   
}
}


    return 0;
}