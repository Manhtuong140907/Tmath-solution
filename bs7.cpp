#include<bits/stdc++.h>
using namespace std;
long long t,a,b,c,d,y;
long long chat(long long dau,long long cuoi,long long x)
{
    long long giua,bien;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        bien=a*giua*giua*giua+b*giua*giua+c*giua+d;
        if(bien==x)
        {
            return giua;
        }
        if(bien>x) 
        {
            cuoi=giua-1;
        }
        else dau=giua+1;    
    }
}
int main()
{
    cin>>t;
    while(t!=0)
    {
        cin>>a>>b>>c>>d>>y;
        cout<<chat(1,1000000,y)<<'\n';
        t--;
    }
}