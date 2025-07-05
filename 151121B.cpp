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
pair<long long,long long> a[1000005];
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
    cin>>x>>y>>n>>m>>t;
    u=x;
    v=y;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i].fi;
        a[i].se=1;
    }  
    for(long long i=n+1;i<=n+m;i++)
    {
        cin>>a[i].fi;
        a[i].se=2;
    }
    for(long long i=1;i<=t;i++)
    {
        cin>>b[i];
    }
    sort(a+1,a+n+m+1);
    
    for(long long i=n+m;i>=1;i--)
    {
        if(a[i].se==1 and x>=1)
        {
            t++;
            b[t]=a[i].fi;
            x--;
        }
        if(a[i].se==2 and y>=1)
        {
            t++;
            b[t]=a[i].fi;
            y--;
        }
    }
    sort(b+1,b+t+1);
    for(long long i=t;i>t-(v+u);i--)
    {
        res=res+b[i];
    }
    cout<<res;
    return 0;
}
/*===============end===================
Code by vinh_nguyenhuumanhtuong
*/
