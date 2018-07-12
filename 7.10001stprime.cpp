#include <bits/stdc++.h>


using namespace std;

//link :- https://www.hackerrank.com/contests/projecteuler/challenges/euler007/problem

int main(){
    int t;int n[1001];
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        
        cin >> n[a0];
    }
        long long unsigned int a,i,j,arr[200001],k=1;
        arr[0]=2;
    
    for(j=3;j<=1000000;j+=2){
            
            for(i=2;i<=(long long unsigned int)sqrt(j);i++)
        {

            if(j%i==0)
            break;
        }
            if(i>(long long unsigned int)sqrt(j))
        {
               arr[k]=j;
               k++;
        }

    }
       
    
         for(int i=0;i<t;i++)
         cout<<arr[n[i]-1]<<endl;
    
    return 0;
}
