#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

int comb(int n,int r);
int dp[10001][10001];

int main()
{
    ffast;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int n,r,a,b,t=0; ll ans=0;
    cin>>n>>a>>b;
    memset(dp,-1,sizeof(dp));
    comb(n,n-1);dp[n][n] = n;
    ll x,y;
    while(t++<=n)
    {
        if(t==a ||t==b) continue;

        ans += dp[n][t];
    }
    cout<<ans<<"\n";

    filoop(n+1){
            //cout<<i<<endl;
            if(i==0) continue;
        fjloop(n+1)
            {
                if(j==0) continue;
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}

int comb(int n,int r)
{
    if(dp[n][r]!=-1) return dp[n][r];
    if(n==r) return 1;
    if(r==1) return n;
    dp[n][r] = comb(n-1,r)+comb(n-1,r-1);
    return dp[n][r];
}


