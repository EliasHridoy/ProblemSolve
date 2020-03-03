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
        int n,a[101];
        cin>>n;

        filoop(n) cin>>a[i];
        bool possible = true;
        filoop(n)
        {
            if(a[i]%2==0)
            {
                if(a[i]%3!=0 && a[i]%5!=0)
                {//cout<<a[i]<<endl;
                possible = false;
                break;
                }
            }

        }
        if(possible)
                cout<<"APPROVED\n";
            else cout<<"DENIED\n";

//    }

    return 0;
}



