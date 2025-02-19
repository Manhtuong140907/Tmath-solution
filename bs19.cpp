#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long a[100005];
long long dau,cuoi,giua;
long long kq;
long long ans;
int main() 
{
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>a[i];
        cuoi=cuoi+a[i];
    }
    dau=1;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        ans=0;
        for(long long i=1;i<=m;i++)
        {
            if(a[i]%giua==0)
            {
                ans+=a[i]/giua;
            }
            else ans=ans+a[i]/giua+1;
        }
        if(ans<=n)
        {
            kq=giua;
            cuoi=giua-1;
        }
        else dau=giua+1;
    }
    cout<<kq;
}