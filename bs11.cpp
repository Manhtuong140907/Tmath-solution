#include<bits/stdc++.h>
#define fi first
#define se second 
#define docnhanh ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long n,m,res;
long long u,v,dem;
long long a[1000005];
long long chat(long long cuoi,long long x)
{
    long long giua,bien=0;
    long long res=-1;
    long long dau=1;
    while(dau<=cuoi)
    {
        bien=0;
        giua=(dau+cuoi)/2;
        for(long long i=1;i<=n;i++)
        {
            if(a[i]>giua)
                bien=bien+a[i]-giua;
        }
        if(bien>=x) 
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
    docnhanh
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        res=max(res,a[i]);
    }
    cout<<chat(res,m);
    return 0;
}