#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

link -: https://www.hackerrank.com/contests/projecteuler/challenges/euler010/problem

int main(){
    
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
    
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long int count=0,sum=0;;
        for(int i=0;i<200001;i++)
            {
            if(arr[i]<=n)
              count++;
            else
                break;
        }
        
        for(int i=0;i<count;i++)
            sum=sum+arr[i];
        cout<<sum<<endl;
    }
    return 0;
}
