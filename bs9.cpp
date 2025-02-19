#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[1000006];
long long dau=1,cuoi,giua;
long long kq;
bool ktra(long long x)
{
    long long t=0;
    for(long long i=1;i<=n;i++) 
    {
        if(a[i]>x)
        {  
            t=t+(a[i]-x);
        }
    }
    if(t>=m) 
    {
        return true;
    }
    return false;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        cuoi=max(cuoi,a[i]);
    }
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        if(ktra(giua))
        {
            kq=giua;
            dau=giua+1;
        }
        else cuoi=giua-1;
    }
    cout<<kq;
}