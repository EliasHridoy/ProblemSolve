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
    int a[3][3];
    filoop(3)
    fjloop(3)
    cin>>a[i][j];
    int n;
    cin>>n;

    while(n--)
    {
        int x;
        cin>>x;
        filoop(3)
        fjloop(3)
        if(x==a[i][j])
            a[i][j]=0;
        }
    int r=0,c=0,d=0;
    filoop(3)
    {
        if(a[i][i]==0)
            d++;
        fjloop(3){
        if(0==a[i][j])
            r++;
        if(0==a[j][i])
            c++;
            }
        if(r!=3||c!=3)
            c=0,r=0;
        else
            break;
    }
    if(d==3 || r==3 || c==3)
        cout<<"Yes\n";
    elif(a[3][1]==0&&a[2][2]==0&&a[3][1]==0)
    cout<<"YES\n";
    else cout<<"No\n";





    return 0;
}


