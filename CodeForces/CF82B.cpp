//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    while(t--)
    {
        long long u,g,b,day=0,n;
        cin>>u>>g>>b;
        n = 0;

        if(g>=u)
            {
                cout<<u<<'\n';
                continue;
            }
        long long k = (u+1)/2;
        while(n<k)
        {
            n += g;
            day += g;
            if( n < k )
                day += b;
                //cout<<n<<" "<<day<<endl;
        }
        cout<<day<<"\n";

    }

    return 0;
}


