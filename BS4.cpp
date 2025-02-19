#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[100055];
long long t,x;
long long les,res;
long long chat1(long long x)
{
    long long dau=1;
    long long cuoi=n;
    long long giua,res;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        if(a[giua]<=x)
        {
            res=a[giua];
            dau=giua+1;
        }
        else cuoi=giua-1;
    }
    return res;
}
long long chat2(long long x)
{
    long long dau=1;
    long long cuoi=n;
    long long giua,res;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        if(a[giua]>=x)
        {
            res=a[giua];
            cuoi=giua-1;
        }
        else dau=giua+1;
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
    while(t!=0)
    {
        cin>>x;
        les=abs(chat1(x)-x);
        res=abs(chat2(x)-x);
        if(les>res)
        {
            cout<<res<<'\n';
        }
        else if(les<res)
        {
            cout<<les<<'\n';
        }
        else cout<<les<<'\n';
        t--;
    }
}