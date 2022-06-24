#include<bits/stdc++.h>
using namespace std;

int main(){
int Test;
cin>>Test;

for (int i = 0; i < Test; i++)
{
    int n,x,y;
    cin>>n>>x>>y;

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];

    }

    int arr2[n];
    for(int i = 0; i <n; i++)
    {
        cin>>arr2[i];
    }




    int z =0;

    for(int i =0; i <n; i++){
        if (((arr1[i]) +x == arr2[i]) || ((arr1[i] +y == arr2[i])) )
        {
            z += 1;
        }
        else{
            z -= 1;
        }
        
    }

    if(z ==n){
        cout<<"Yes"<<endl;
    }

    else{
        cout<<"No"<<endl;
    }

    
}


return 0;
}