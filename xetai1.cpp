#include<bits/stdc++.h>

#define fi first
#define se second 
#define _nhmt_ main()
#define docnhanh ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

using namespace std;

//===============declare===============

long long n,m,res;
long long u,v,dem;
vector<long long> a[100005];
queue<long long> q;
long long vs[100005];
long long minh,trang;
long long b[1000005];
long long t,x,y;
string s;

//===============function==============
void mo()
{
    freopen("nhap.inp","r",stdin);
    freopen("nhap.out","w",stdout);
}
void BFS(long long s)
{
    q.push(s);// luc dau queue rong push(s)  queue :  s 
    vs[s]=1;// danh dau s 
    while(q.size()!=0)// neeus queue con phan tu thi thuc hien cac buoc duoi 
    {
        u=q.front();// lay phan tu dau tien cua queue
        q.pop();// xoas phantu dau tien 
        for(long long x:a[u]) // truy caapj taats car cac dinh ke cua dinh u 
        {
            if(vs[x]==0)// neu dinh x chua duoc danh dau 
            {
                q.push(x);// them x vao queue
                vs[x]=1;// danh dau dinh x
            }
        }
    }
}
//================code=================

_nhmt_
{
    //mo();
    docnhanh
    cin>>n>>m>>x>>minh>>trang;
    for(long long i=1;i<=m;i++)
    {
        cin>>u>>v>>t;
        if(x<=t)
        {
            a[u].push_back(v);
            a[v].push_back(u);
        }
    }  
    BFS(minh);
    if(vs[trang]==1 and minh!=trang)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
/*===============end===================
Code by vinh_nguyenhuumanhtuong
*/
