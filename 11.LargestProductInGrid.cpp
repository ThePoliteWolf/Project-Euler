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
link :- https://www.hackerrank.com/contests/projecteuler/challenges/euler011/problem.

int main()
{
    vector < vector < lli > > a(20, vector < lli >(20));
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++)
            cin >> a[i][j];
    }

    lli mx = 0;
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            if(i <= 15) // down
            {
                mx = max(mx, a[i][j]*a[i + 1][j]*a[i + 2][j]*a[i + 3][j]);
            }
            if(j <= 15) // right
            {
                mx = max(mx, a[i][j]*a[i][j + 1]*a[i][j + 2]*a[i][j + 3]);
            }
            if(j - 4 + 1 >= 0) // left
            {
                mx = max(mx, a[i][j]*a[i][j - 1]*a[i][j - 2]*a[i][j - 3]);
            }

            if(i - 4 + 1 >= 0) // up
            {
                mx = max(mx, a[i][j]*a[i - 1][j]*a[i - 2][j]*a[i - 3][j]);
            }

            if(i <= 15 && j - 4 + 1 >= 0)     // left down diagonal
            {
                mx = max(mx, a[i][j]*a[i + 1][j - 1]*a[i + 2][j - 2]*a[i + 3][j - 3]);
            }
            if(i <= 15 && j <= 15)              // right down diagonal
            {
                mx = max(mx, a[i][j]*a[i + 1][j + 1]*a[i + 2][j + 2]*a[i + 3][j + 3]);
            }
            if(j - 4 + 1 >= 0 && i - 4 + 1 >= 0)    // left up diagonal
            {
                mx = max(mx, a[i][j]*a[i - 1][j - 1]*a[i - 2][j - 2]*a[i - 3][j - 3]); 
            }
            if(j <= 15 && i - 4 + 1 >= 0)          // right up diagonal
            {
                mx = max(mx, a[i][j]*a[i - 1][j + 1]*a[i - 2][j + 2]*a[i - 3][j + 3]);
            }

        }

    }
    cout << mx;


    return 0;
}
