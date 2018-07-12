#include <bits/stdc++.h>

using namespace std;
link -: https://www.hackerrank.com/contests/projecteuler/challenges/euler004/problem

int main(){
    int t;
    cin >> t;
    int max1;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        max1=1;
        for(int i=101;i<=999;++i){     
            long long unsigned int temp,mul,rev;
            
            for(int j=101;j<=999;++j){
                    mul=i*j;
                if(mul<n){
                temp=mul;
                    rev=0;
                while(temp>0){
                    int rem=temp%10;
                    rev=(rev*10)+rem;
                    temp/=10;
                    
                }
                if(rev==mul){
                    if(mul>max1)
                        max1=mul;
                }
            }
                
          }
        }
        cout<<max1<<endl;
    }
    return 0;
}
