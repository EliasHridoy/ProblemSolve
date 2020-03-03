#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

int main()
{
    ffast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int a[101];
        filoop(n) cin>>a[i];

        filoop(n-1)
        {
            if(d==0)
                break;
                //cout<<"HEda"<<d/(i+1)<<" "<<d<<endl;
            if(d/(i+1) > d)
            {

                break;
            }
            if(a[i+1]>0 && d/(i+1) <= d)
            {
                int tmp = d/( i+1);
                if(a[i+1]>=tmp)
                {
                    a[0] += tmp;
                    d -= tmp*(i+1);
                }
                else

                {
                    a[0] += a[i+1];
                    d -= a[i+1]*(i+1);
                }
                //cout<<a[0]<<" "<<d<<" "<<d/(i+1)<<endl;
            }
        }
        cout<<a[0]<<endl;


    }

    return 0;
}



