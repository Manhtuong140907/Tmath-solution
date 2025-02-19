#include<bits/stdc++.h>
using namespace std;
long long n,t,x,kp=1e9;
long long a[100005];
long long chat2(long long a[],long long c)
{
	long long dau=1,cuoi=n;
	long long ans=0;
	while(dau<=cuoi)
	{
		long long giua=(dau+cuoi)/2;
		if(a[giua]<=c)
		{
			ans=giua;
			dau=giua+1;
		}
		else cuoi=giua-1;
	}
	return ans;
}
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cin>>t;
	while(t!=0)
	{
		cin>>x;
		if(a[chat2(a,x)==0])
		{
			cout<<-1<<'\n';
		}
		else cout<<a[chat2(a,x)]<<'\n';
		t--;
	}
}
