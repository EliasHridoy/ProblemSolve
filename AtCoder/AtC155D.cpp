#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

ll a[200001];
ll mul[2000000000000];
int main()
{
    ffast;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    ll n,k;
    cin>>n>>k;
    filoop(n)
    {
        cin>>a[i];
    }
    ll l=0;
    filoop(n-1)
    {
        ll j=i+1;
        while(j<n){
            mul[l] = a[i]*a[j];
            j++;
        }
    }
    cout<<mul[k];


    return 0;
}


