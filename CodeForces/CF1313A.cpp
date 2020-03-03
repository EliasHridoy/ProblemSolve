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


    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,w[10]= {0};
        cin>>a>>b>>c;
        int tmp;
        if(a>b&&a>c) {swap(a,c); if(a>b) swap(a,b);}
        elif(b>a&&b>c) {swap(b,c); if(a>b) swap(a,b);}

        for(int i=1; i<=7; i++)
        {
            if(i%2 && c>0)
            {
                if(w[1]==0)
                {
                    w[1] = 1;c--;
                }
                elif(w[3]==0 && b>0)
                {
                    w[3]=1; c--; b--;
                }
                elif(w[5]==0 && a>0)
                {
                    w[5]=1; c--;a--;
                }
                elif(w[7]==0 && a>0 && b>0 )
                {
                    w[7]=1;c--;a--;b--;
                }
            }
            elif(w[4]==0&& a>0) {w[4]=1;a--;}
            elif(i%2==0 && b>0)
            {
                if(w[2]==0 )
                {
                    w[2] = 1;b--;
                }
                elif(w[6]==0 && a>0)
                {
                    w[6]=1; a--; b--;
                }
            }


        }
        int cnt=0;
        for(int i=1;i<=7;i++){if(w[i]==1) cnt++; }
    cout<<cnt<<"\n";




    }

    return 0;
}



