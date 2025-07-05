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
    //mo();
    docnhanh
    for(long long i=1;i<=4;i++)
    {
        if(i==1 or i==4)
        {
            for(long long j=1;j<=10;j++)
            {
                cout<<"$";
            }
            cout<<endl;
        }
        else 
        {
            cout<<"$";
            for(long long j=1;j<=8;j++)
            {
                cout<<" ";
            }  
            cout<<"$"<<endl;
        }
    }
    return 0;
}
/*===============end===================
Code by vinh_nguyenhuumanhtuong
*/
