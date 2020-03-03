#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

int comb(int n,int r);
int dp[101][101];

int main()
{
    ffast;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);


    int t;
    //cin>>t;
    int n,r;

    while(cin>>n>>r && n!=0&&r!=0)
    {

        memset(dp,-1,sizeof(dp));
        cout<<n<<" things taken "<<r<<" at a time is "<<comb(n,r)<<" exactly.\n";

/*
        filoop(n+1){
            //cout<<i<<endl;
            if(i==0) continue;
        fjloop(r+1)
            {
                if(j==0) continue;
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        */

    }

    return 0;
}

int comb(int n,int r)
{
    if(dp[n][r]!=-1) return dp[n][r];

    //cout<<n<<" "<<r<<" "<<dp[n][r]<<endl;
    if(n==r) return 1;
    if(r==1) return n;

    dp[n][r] = comb(n-1,r)+comb(n-1,r-1);
    //cout<<n<<" "<<r<<" "<<dp[n][r]<<endl;
    return dp[n][r];
}


