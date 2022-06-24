#include<bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin>>test;

    while(test--)
    {
        int No_of_friend;
        cin>>No_of_friend;

       int arr[No_of_friend];
       for(int i =0; i < No_of_friend; i++){
           cin>>arr[i];

       }
    sort(arr,arr+No_of_friend);

    int curr_count;
    int max_count = 1;
    int res = arr[0];

    for(int i =1; i <= No_of_friend; i++){
        if(arr[i] == arr[i-1])
        {
            curr_count++;

        }

        else{
            curr_count =1;
        }

        if(curr_count>max_count){
            max_count = curr_count;
            res = arr[i-1];
        }

        cout<<res<<endl;
    }


    }
    
    return 0;
}