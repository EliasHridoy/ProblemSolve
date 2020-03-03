#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define elif else if
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)


int dp[101][101];

int main()
{
    ffast;
    //freopen("0in.txt","r",stdin);
    //freopen("0out.txt","w",stdout);

        int n,x[101],mini=100,maxi=0;
        cin>>n;
        filoop(n) {
            cin>>x[i];
            if(mini>x[i]) mini = x[i];
            if(maxi<x[i]) maxi = x[i];
            }
        int avrg,ans=100000001;
        sort(x,x+n);

        for(int i=mini;i<=maxi;i++){
            fjloop(n)
            {
                int tmp = (x[j]-i);
                dp[i][j] = tmp*tmp;
            }
        }

        for(int i=mini; i<= maxi;i++){
        int cont=0;
        fjloop(n){
            cont+= dp[i][j];
        }
        if(cont<ans) ans = cont;
        }
        cout<<ans<<"\n";


    return 0;
}





