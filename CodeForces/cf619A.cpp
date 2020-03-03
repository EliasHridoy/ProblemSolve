///
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


    int t;
    cin>>t;
    while(t--)
    {
        bool possible = true;
        string a,b,c;
        cin>>a>>b>>c;
        filoop(a.length())
        {
            //cout<<a[i]<<" "<<b[i] <<" "<<c[i]<<endl;
            if(a[i]!=c[i])
            {
                if(b[i]!=c[i])
                {
                    possible = false;
                    break;
                }
            }
        }

        if(possible)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}



