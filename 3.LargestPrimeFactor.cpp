/*
 author : @itzmv
 */
#include<bits/stdc++.h>
using namespace std;
link -: https://www.hackerrank.com/contests/projecteuler/challenges/euler003

#define ll int64_t
#define llu uint64_t
#define lli long long int
#define MAX 1000
#define MOD 1000000007
#define mp make_pair
#define fr(i, n) for( int i = 0; i < n; i++)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)


int main()
{
    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        long n;
        std::cin >> n;
        long lp = 2;

        while(n > 1)
        {
            while (n % lp == 0)
            {
                n /= lp;
            }

            lp += 1;

            if(lp * lp > n)
            {
                if(n > 1)
                {
                    lp = n;
                    break;
                }

                else
                {
                    lp -= 1;
                }
            }
        }

        std::cout << lp << std::endl;
    }
    return 0;
}
