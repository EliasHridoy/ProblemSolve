#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

ll coin[100],make,dp[100][100];

int call(int i,int amount);

int main()
{
    ffast;
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    memset(dp,-1,sizeof(dp));
    int n;///number of coin
    cin>>n>>make;
    filoop(n) cin>>coin[i];
    cout<<call(n-1,0)<<"\n";


    return 0;
}


int call(int i,int amount)
{
    if(amount==make ) return 1;
    if(i<0) return 0;
    if(dp[i][amount]!=-1) return dp[i][amount];
    int ret1,ret2;
    if(coin[i]+amount<=make) ret1= call(i,coin[i]+amount);
    else return 0;

    ret2 = call(i-1,amount);
    return dp[i][amount] = ret1+ret2;//storing and returning
}
