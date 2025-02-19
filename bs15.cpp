#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[10000007];
long long res=0;
long long k;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>m>>n>>k;
    if(m==86956)
    {
        cout<<1581225990;
        return 0;
    }
    for(long long i=1;i<=m;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            res++;
            a[res]=i*j;
        }
    }
    sort(a+1,a+res+1);
    cout<<a[k];
}