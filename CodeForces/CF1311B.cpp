#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define elif else if
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=1;i<=(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

int main()
{
    ffast;
    //freopen("0in.txt","r",stdin);
    //freopen("0out.txt","w",stdout);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a[101],b[101]={0};
        cin>>n>>m;
        filoop(n)cin>>a[i];
        filoop(m){int k;cin>>k;b[k]=1;}
        filoop(n)
        {
            int in;
            if(b[i]==1)in=i;
            if(in==n-1){continue;}
            elif(a[in]>a[in+1]) swap(a[in],a[in+1]);
        }
        bool possible =true;
        filoop(n)
        {
            if(b[i]==0)
            {
                //cout<<i<<" "<<b[i]<<endl;
                for(int j=i+1;j<=n; j++)
                {
                    if(a[i]>a[j]){possible=false;break;}
                }
            }
            if(!possible)break;
        }
        if(possible)cout<<"YES\n";
        else cout<<"NO\n";

    }

    return 0;
}



