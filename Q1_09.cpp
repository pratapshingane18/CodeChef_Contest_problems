#include"bits/stdc++.h"
using namespace std;
#define MAX_SIZE 10000
// int countnum(int num, int coord,int arr[MAX_SIZE][2])
// {
//     int ans = 1;
 
    
//     for (int a = 1; a < num; a++) {
//         int j = 0;

//         for (j = 0; j < a; j++)
//             if (arr[a][coord] == arr[j][coord])
//                 break;

//         if (a == j)
//             ans++;
//     }

//      return (num - ans);
// }


int countnum(int num, int coord,int arr[2][MAX_SIZE])
{
   +
    sort(arr[coord], arr[coord] + num);
 
    
    int res = 0;
    for (int i = 0; i < num; i++) {
 
       
        while (i < num - 1 && arr[coord][i] == arr[coord][i + 1])
            i++;
 
        res++;
    }
 
    return (num -res);
}
 


int main()
{
    int T;
    cin>>T;
    while(T--){
    int num;
    cin >> num;
int c1,c2,TC=0;
    int arr[2][num];

    for (int index = 0; index < num; index++)
    {
      cin>>arr[0][index]>>arr[1][index];
    }
    
    for (int i = 0; i <2; i++)
    {
      c1 = countnum(num,i,arr);
      
      TC += c1;
    }
    cout<<(2*num-TC)<<endl;
    
    }
    return 0;
}
