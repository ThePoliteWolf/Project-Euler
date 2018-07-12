/*
    author :- @ItzMv
*/
#include<bits/stdc++.h>
#include<string>
#define ll int64_t
#define llu uint64_t
#define lli long long int
#define MAX 1000001
#define MOD 1000000007
#define mp make_pair
#define fr(i, n) for( int i = 0; i < n; i++)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

// link :- https://www.hackerrank.com/contests/projecteuler/challenges/euler012/problem

vector < int > prime(1001, 1);
void sieve()                                        // finding prime numbers
{
    for(int i = 2; i*i < 1001; i++)
    {
        if(prime[i] == 1)
        {
            for(int j = 2*i; j < 1001; j += i)
                prime[j] = 0;
        }

    }

}

int total_factors(int n)                           // finding factor of n using prime factorization
{
    int fact = 1;
    for(int i = 2; i <= 1001; i++)
    {
        int sum = 0;
        if(prime[i] == 1)
        {
            while(n % i == 0 && n > 1)
            {
                sum += 1;
                n /= i;
            }
        }
        fact *= (sum + 1);
        if(n == 1)
            break;
    }
    return fact;
}

int main()
{
    fastio;
    sieve();
    vector < int > a(100001);
    int sum = 1;
    a[1] = 1;
    for(int i = 2; i < 100001; ++i)
    {
        sum += i;
        a[i] = sum;
    }

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i = 1; i < 100001; i++)
        {
            int fact = total_factors(a[i]);
            if(fact > n)
            {
                cout << a[i] ;
                break;
            }
        }
        cout << "\n";

    }
    return 0;
}
