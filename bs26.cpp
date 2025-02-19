#include<bits/stdc++.h>
#define fi first
#define se second 
#define docnhanh ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long n,m,res;
long long u,v,dem;
long long chat1(long long x,long long dau , long long cuoi )
{
    long long giua,res,ans;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        ans=giua*(giua+1)/2;
        if(ans<=x)
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
    cin>>n;
    m=chat1(n,1,10000000000);
    if(m*(m+1)/2==n)
    {
        cout<<m;
    }
    else cout<<m+1;
    return 0;
}