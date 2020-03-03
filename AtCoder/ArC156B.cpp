#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define elif else if
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

int main()
{
    ffast;
    //freopen("0in.txt","r",stdin);
    //freopen("0out.txt","w",stdout);


    int n,k,cnt=0;
    cin>>n>>k;
    while(n!=0)
    {
        n = n/k;cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}



