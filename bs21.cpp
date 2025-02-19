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
long long t,x,y,k;
string s;

//===============function==============
void mo()
{
    freopen("nhap.inp","r",stdin);
    freopen("nhap.out","w",stdout);
}
bool kt(long long x)
{
    long long res=1;
    long long ans=x;
    while(res<=x)
    {
        res=res*k;
        ans=ans+x/res;
    }
    return ans>=n;
}
//================code=================

_nhmt_
{
    //mo();
    docnhanh
    cin>>n>>k;
    long long dau,cuoi,giua;
    dau=1;
    cuoi=n;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        if(kt(giua))
        {
            res=giua;
            cuoi=giua-1;
        }
        else dau=giua+1;
    }
    cout<<res;
    return 0;
}
/*===============end===================
Code by vinh_nguyenhuumanhtuong
*/