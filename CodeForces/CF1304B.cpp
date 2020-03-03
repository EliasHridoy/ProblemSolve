#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define elif else if
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

set<string> str;

int main()
{
    ffast;
        int n,m;
        cin>>n>>m;
        string ans="",mid,rev="",s,t;

        filoop(n) {
            cin>>s,t=s;
            reverse(t.begin(),t.end());
            if(s==t) mid = s;
            elif(str.count(t)) { ans+=s; rev=t+rev; }
            str.insert(s);

        }
        ans = ans+mid+rev;
        cout<<ans.length()<<"\n"<<ans<<"\n";


    return 0;
}



