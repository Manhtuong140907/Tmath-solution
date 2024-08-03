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
long long gio=0;
long long phut=0;
string s;

//===============function==============
void mo()
{
    freopen("nhap.inp","r",stdin);
    freopen("nhap.out","w",stdout);
}
bool kt(long long gio ,long long phut)
{
    long long a,b,c,d;
    if(gio<10)
    {
        a=0;
        b=gio;
    }
    else 
    {
        a=gio/10;
        b=gio%10;
    }
    if(phut<10)
    {
        c=0;
        d=phut;
    }
    else 
    {
        c=phut/10;
        d=phut%10;
    }
    if(a<b and b<c and c<d and c<d)
    {
        return true;
    }
    else return false;
}
//================code=================

_nhmt_
{
    //mo();
    docnhanh
    cin>>n;
    res=0;
    for(long long i=1;i<=n;i++)
    {
        if(i%60==0)
        {
            gio=gio+1;
        }
        phut=i%60;
        if(kt(gio,phut))
        {
            res++;
        }
    }
    cout<<res;
    return 0;
}
/*===============end===================
Code by vinh_nguyenhuumanhtuong
*/
