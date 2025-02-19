#include<bits/stdc++.h>
using namespace std;
long long n,x;
long long t,a[1000006];
long long chat(long long a[],long long b,long long c)
{
	long long dau=1,cuoi=n;
	long long ans=0;
	while(dau<=cuoi)
	{
		long long giua=(dau+cuoi)/2;
		if(a[giua]>=c)
		{
			ans=giua;
			cuoi=giua-1;
		}
		else dau=giua+1;
	}
	return ans;
}
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		a[i]=i*i+1;
	}
	cin>>t;
	while(t!=0)
	{
		cin>>x;
		cout<<a[chat(a,n,x)]<<'\n';
		t--;
	}
}
