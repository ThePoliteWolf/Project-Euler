#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

link -: https://www.hackerrank.com/contests/projecteuler/challenges/euler005/problem

long long int lcm( long long int a, long long int b)
{
    long long int i,k=a>b?a:b;
	for(i=k;i<=a*b;i+=k)
        if(i%a==0 && i%b==0)
            {
              
                break;
            }
    return i;
}
int main()
{
    int t,h;
    cin>>t;
    for( h=0;h<t;h++)
        {
     long long int n;
    cin>>n;
	vector<long long int> a(n);
    for(long long int i=0;i<n;i++)
        a[i]=i+1;
    long long int k=a[0];           //set k=first value of array
    for(long long int i=1;i<n;i++)
    {
        k=lcm(a[i],k);              //find lcm of whole array
    }
    cout<<k<<endl;
    }
	return 0;
}

