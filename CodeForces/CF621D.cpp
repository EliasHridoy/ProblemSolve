#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)


int a[200001];
int g[200001][200001];
int main()
{
    ffast;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
        memset(g,0,sizeof(g));

        int n,m,k;
        cin>>n>>m>>k;
        filoop(k) cin>>a[i];

        filoop(n)
        {
            int x,y;
            cin>>x>>y;
            g[x][y] = 1;
            g[y][x] = 1;
        }



    return 0;
}



