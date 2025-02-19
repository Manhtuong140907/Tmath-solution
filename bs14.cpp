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
long long b[1000005];
long long t,x,y;
string s;

//===============function==============
void mo()
{
    freopen("nhap.inp","r",stdin);
    freopen("nhap.out","w",stdout);
}
//================code=================

_nhmt_
{
    //mo();
    docnhanh
    cin>>n>>x;
    b[0];
    dem=1e9;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    long long dau,cuoi,giua;
    for(long long i=1;i<=n;i++)
    {
        dau=i;
        cuoi=n;
        res=n;
        while(dau<=cuoi)
        {
            giua=(dau+cuoi)/2;
            if(b[giua]-b[i-1]>=x)
            {
                res=min(res,giua-i+1);
                cuoi=giua-1;
            }
            else dau=giua+1;
        }
        if(res!=0)
        {
            dem=min(dem,res);
        }
    }
    cout<<dem;
    return 0;
}
/*===============end===================
Code by vinh_nguyenhuumanhtuong
*/