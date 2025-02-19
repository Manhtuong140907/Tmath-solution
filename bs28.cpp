#include<bits/stdc++.h>
#define fi first
#define se second 
#define docnhanh ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long n,m,res;
long long u,v,dem;
long long a[1000005];
long long b[1000005];
long long chat(long long x)
{
    long long dau=1,cuoi=m,giua;
    long long ans=-1;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        if(b[giua]>=x)
        {
            ans=giua;
            cuoi=giua-1;
        }
        else dau=giua+1;
    }
    return ans;
}
long long chat2(long long x)
{
    long long dau=1,cuoi=m,giua,ans=-1;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        if(b[giua]<=x)
        {
            ans=giua;
            dau=giua+1;
        }
        else cuoi=giua-1;
    }
    return ans;
}
void mo()
{
    freopen("nhap.inp","r",stdin);
    freopen("nhap.out","w",stdout);
}
int main()
{
    //mo();
    docnhanh
    cin>>n>>m;
    res=1e18;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    for(long long i=1;i<=n;i++)
    {
        u=chat(-a[i]);
        v=chat2(-a[i]);
        if(u!=-1)
        {
            res=min(res,abs(a[i]+b[u]));
        }
        if(v!=-1)
        {
            res=min(res,abs(a[i]+b[v]));
        }
    }
    cout<<res;
    return 0;
}