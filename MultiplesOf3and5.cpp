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
link :- https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long int sumt,sumf,nt,nf,nm,sumnm;
        /*Manish from future to manish past you are using the sum of all k multiples upto n= kn(n+1)/2*/
        nt=(int)(n-1)/3;
        sumt=3*nt*(nt+1)/2;
        
        nf=(int)(n-1)/5;
        sumf=5*nf*(nf+1)/2;
        
        nm=(int)(n-1)/15;
        sumnm=15*nm*(nm+1)/2;
        
        cout<<sumt+sumf-sumnm<<endl;
    }
    return 0;
}
