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
    mo();
    docnhanh
    cin>>t;
    a[0]=1;
    for(long long i=1;i<=30;i++)
    {
        a[i]=a[i-1]*2;
    }
    while(t!=0)
    {
        cin>>n;
        res=1e18;
        dem=0;
        for(long long i=1;i<=30;i++)
        {
            for(long long j=0;j<i;j++)
            {
                if(a[j]+a[i]<=n)
                {
                    res=min(res,n-(a[j]+a[i]));
                }
                else if(a[j]+a[i]>n)
                {
                    res=min(res,a[i]+a[j]-n);
                }
            }
            if(a[i]>n)
            {
                res=min(res,a[i]+1-n);
                break;
            }
        }
        cout<<res<<'\n';
        t--;
    }
    return 0;
}
/*===============end===================
Code by vinh_nguyenhuumanhtuong
*/
