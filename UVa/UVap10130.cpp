#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

int dp[1001][1001], g, mem[1001];
int weight[1001],value[1001];

int knap(int i,int w);

int main()
{
    ffast;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);


    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        int n;
        cin>>n;
        filoop(n) cin>>value[i]>>weight[i];
        cin>>g;
        filoop(g) cin>>mem[i];
        int res= 0;
        filoop(g)
        {
            res+=knap(n-1,mem[i]);
            memset(dp,-1,sizeof(dp));

        }
        cout<<res<<endl;
    }

    return 0;
}

int knap(int i,int w)
{
    int proft1,proft2;
    if(i<0) return 0;
    if(dp[i][w]!=-1) return dp[i][w];

    if(w-weight[i]<0) proft1 = 0;
    else proft1 = value[i]  +  knap(i-1,w-weight[i]);

    proft2 = knap(i-1,w);

    dp[i][w] = max( proft1 , proft2 );
    return dp[i][w];
}


