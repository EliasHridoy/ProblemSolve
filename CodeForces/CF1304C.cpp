#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define elif else if
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)


int t[1000],l[1000],h[1000];

int main()
{
    ffast;
    //freopen("0in.txt","r",stdin);
    //freopen("0out.txt","w",stdout);


    int q;
    cin>>q;
    while(q--)
    {
        int n,m,mn,mx,last=0,k;
        bool possile=true;
        cin>>n>>m;
        for(int i=0; i<n; i++)
            cin>>t[i]>>l[i]>>h[i];

        mn=m,mx=m;
        for(int i=0; i<n; i++)
        {
            k = t[i] - last;
            if(l[i]>=mn-k && h[i]<=mx+k)
            {
                mn = max(mn-k,l[i]);
                mx = min(mx+k,h[i]);
                last = t[i];
            }
            else
            {
                possile=false;
                break;
            }
        }

        if(possile)
            printf("YES\n");
        else
            printf("NO\n");
    }



return 0;
}



