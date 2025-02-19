#include<bits/stdc++.h>
using namespace std;
long long n;
long long i;
long long a[100007];
long long t,x;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];  
    sort(a+1,a+n+1);
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(binary_search(a+1,a+n+1,x))
            cout<<"Y"<<"\n";
        else 
            cout<<"N"<<"\n";
    }
}