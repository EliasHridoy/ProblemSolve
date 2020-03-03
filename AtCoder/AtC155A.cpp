
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

int main()
{
    ffast;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);


//    int t;
//    cin>>t;
//    while(t--)
//    {
        int a,b,c;
        cin>>a>>b>>c;
        //if(a==b && a==c) cout<<"No\n";
        if( (a==b&&a!=c)  || (b==c&&a!=b) || (a==c&&a!=b)  ) cout<<"Yes\n";
        else cout<<"No\n";

//    }

    return 0;
}


