#include<bits/stdc++.h>

#define fi first
#define se second 
#define _nhmt_ main()
#define docnhanh ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

using namespace std;

//===============declare===============

long long n,m,res;
long long u,v,dem;
long long a[1000005];
long long t,x,y;
long long b[1000005];
long long c[1000005];
string s;

//===============function==============
void mo()
{
    freopen("nhap.inp","r",stdin);
    freopen("nhap.out","w",stdout);
}
long long chatnhiphan(long long x,long long cuoi)
{
    long long dau=1;
    long long res=0;
    
    while(dau<=cuoi)
    {
        long long giua=(dau+cuoi)/2;
        if(c[giua]>x)
        {
            cuoi=giua-1;
        }
        else if(c[giua]<=x)
        {
            res=giua;
            dau=giua+1;
        }
        
    }
    return res;
}
//================code=================

_nhmt_
{
    //mo();
    docnhanh
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    dem=1;
    c[dem]=a[1];
    for(long long i=2;i<=n;i++)
    {
        dem++;
        c[dem]=max(c[dem-1],a[i]-a[i-1]);
    }
    sort(c+1,c+dem+1);
    for(long long i=1;i<=m;i++)
    {
        cout<<chatnhiphan(b[i],dem)<<'\n';
    }
    return 0;
}
/*===============end===================
Code by vinh_nguyenhuumanhtuong
*/
