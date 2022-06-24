#include<iostream>
using namespace std;

int main()
{
    int Test;
    cin>>Test;
    for (int i = 0; i < Test; i++)
    {
        int N,K,X;
        cin>>N>>K>>X;
        if (N == K && X<=N)
        {
            for (int j = 0; j < N+1; j++)
            {
               if (X == j)
               {
                   continue;
               }
               cout<<j<<" ";
               
            }
            
        }

        else if (N>K && K>=X)
        {
            if (K == X)
            {
            int max = 0;
            while (N>0)
            {
                if(max == X)
                {
                    max ++;
                    continue;
                }

                cout<<max<<" ";
                max++;

                if (max >=K)
                {
                    max = 0;
                }

                N--;
            } 
            }
            else{
                int max = 0;
            while (N>0)
            {
                if(max == X)
                {
                    max ++;
                    continue;
                }

                cout<<max<<" ";
                max++;

                if (max >=K)
                {
                    max = 0;
                }

                N--;
            } 
            }
            
        }

        else{
            cout<<-1<<" ";

        }
        cout<<endl;
        
        

    }
    
    return 0;
}