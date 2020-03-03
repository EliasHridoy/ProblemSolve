#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
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
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if( (y-x)%(a+b)==0) printf("%d\n",(y-x)/(a+b));
        else printf("-1\n");

    }

    return 0;
}



