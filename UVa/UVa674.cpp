#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

ll coin[5]={50,25,10,5,1},make,dp[5][7490];



int call(int i,int amount);

int main()
{
    ffast;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);


    memset(dp,-1,sizeof(dp));
    while(cin>>make){
        if(make==0)
        {
            printf("1\n");
            continue;
        }

        cout<<call(0,make)<<",";



    }

    return 0;
}


int call(int i,int amount)
{
    if(amount==0 ) return 1;
    if(i>=5 || amount<0) return 0;
    if(dp[i][amount]!=-1) return dp[i][amount];
    int ret1=0,ret2=0;
    if(coin[i]+amount<=make) ret1= call(i,coin[i]-amount);
    //else return 0;

    ret2 = call(i+1,amount);
    return dp[i][amount] = ret1+ret2;//storing and returning
}
