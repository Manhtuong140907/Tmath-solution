#include<bits/stdc++.h>
#define docnhanh ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long n,m,res;
long long u,v,dem;
long long t,x;
long long chat(long long dau,long long cuoi,long long x)
{
    long long giua,bien;
    long long res=-1;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        bien=giua*giua*giua-2*giua+5;
        if(bien==x)
        {
            res=giua;
        }
        if(bien>x) 
        {
            cuoi=giua-1;
        }
        else dau=giua+1;
    }
    return res;
}
int main()
{
    docnhanh
    cin>>t;
    while(t!=0)
    {
        cin>>x;
        cout<<chat(0,1e6,x)<<'\n';
        t--;
    }
}