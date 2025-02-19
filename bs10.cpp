#include <bits/stdc++.h>
using namespace std;
long long a[100005];
long long n;
long long tmp,res;
int main()
{
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (long long i=0;i<n-2;i++)
    {
        for (long long j=i+1;j<n-1;j++)
        {
            tmp=lower_bound(a+j+1,a+n,a[i]+a[j])-a;
            res=res+(tmp-j-1);
        }
    }
    cout<<res;
}