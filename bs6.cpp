#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[1000005];
long long t,x;
long long chat(long long x)
{
    long long dau=1;
    long long cuoi=n;
    long long giua,res;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        if(a[giua]<=x)
        {
            res=giua;
            dau=giua+1;
        }
        else cuoi=giua-1;
    }
    return res;
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cin>>t;
    while (t!=0)
    {
        cin>>x;
        if(x<a[1])
        {
            cout<<0<<'\n';
            t--;
            continue;
        }
        else cout<<chat(x)<<'\n';
        t--;
    }
    
}