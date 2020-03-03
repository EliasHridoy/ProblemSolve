///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n); for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)


int a[100001];


int main()
{
    ffast;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);


    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        filoop(n) cin>>a[i];

        ll k=0,mini=999999999,maxi=-1;
        filoop(n)
        {
            if(a[i]>=0&& mini>a[i])
                mini = a[i];
            if(a[i]>=0&& maxi<a[i])
                maxi = a[i];
        }
        k = (mini+maxi)/2
        filoop(n) if(a[i]<0) a[i] = k;
        ll m = 0;
        filoop(n-1)
            if( abs(a[i]-a[i+1])>m)
                m = abs(a[i]-a[i+1]);
        printf("%lld %lld\n",m,k);
    }

    return 0;
}


