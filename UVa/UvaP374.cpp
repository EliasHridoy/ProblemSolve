/// https://onlinejudge.org/external/3/p374.pdf
#include<bits/stdc++.h>
using namespace std;

#define i64 long long
i64 M;

i64 F(i64 B,i64 P)
{
    if(P==0) return 1%M;
    if(P%2==0)
    {
        i64 ret = F(B,P/2);
            return ((ret%M)*(ret%M))%M;
    }
    else
        return ( (B%M) * (F(B,P-1)%M) )%M;
}

int main()
{
    i64 B,P;

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    while(cin>>B>>P>>M)
    {
        //cout<<B<<" "<<P<<" "<<M<<endl;
        i64 ret = F(B,P);
        cout<<ret<<'\n';
    }

    return 0;
}
