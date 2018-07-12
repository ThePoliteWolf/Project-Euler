#include <iostream>
using namespace std;

#define Max 500
#define NIL -1
long long int lookup[Max];

link :- https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem
void intialize()
{
    for(long long int i=1;i<=200;i++)
       lookup[i]=NIL;
}

long long int fib(long long  int n)
{
    if(lookup[n]==NIL)
    {
        if(n<=1)
            lookup[n]=n;
        else
            lookup[n]=fib(n-1)+fib(n-2);
    }
    return lookup[n];
}
 int main()
{

    intialize();

   long  long int x=fib(100);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        int k;
        for(int j=0;j<=90;++j)
            if(lookup[j]>=n)
        {
             k=j-1;
            break;
        }

      long long  int sum=0;
        for(int m=3;m<=k;m+=3)
        {
          //  if(lookup[m]%2==0)
            sum=sum+lookup[m];
        }
        cout<<sum<<endl;
    }

    return 0;
}
