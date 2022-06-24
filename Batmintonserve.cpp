#include<bits/stdc++.h>
using namespace std;

int main(){
int Test;
cin>>Test;

for (int i = 0; i < Test; i++)
{
    // int points;
    // cin>>points;
    // int res;
    // res = (points / 2) +1;
    // cout<<res<<endl;

    int x;
    cin>>x;
    string result;
    cin>>result;

    int Carspoints =0;
    
    int ChefPoint =0;
    
    int CarsPrize =0;

    for(int i =0; i <result.length(); i++){
        if(result[i] == 'C'){
            Carspoints += 2;


        }

        else if(result[i] == 'D'){
            Carspoints += 1;
            ChefPoint += 1;
        }

        else{
            ChefPoint +=1;
        }
    }

    if(Carspoints > ChefPoint){
        CarsPrize = 60*x;
    }

    else if(Carspoints == ChefPoint){
        CarsPrize = 55*x;

    }

    else{
        CarsPrize = 40*x;
    }





    if(Carspoints > ChefPoint){
        CarsPrize = 60*x;
    }

    else if(Carspoints == ChefPoint){
        CarsPrize = 55*x;

    }

    else{
        CarsPrize = 40*x;
    }

    cout<<CarsPrize<<endl;
}
return 0;
}