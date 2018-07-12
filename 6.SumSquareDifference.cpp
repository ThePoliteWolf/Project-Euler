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


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long unsigned int n;
        cin >> n;
        long long unsigned int sumsq=(n*(n+1))/2;
     
        long long unsigned int sqsum=(n*(n+1)*(2*n+1))/6;
        cout<<sumsq*sumsq-sqsum<<endl;
    }
    return 0;
}
