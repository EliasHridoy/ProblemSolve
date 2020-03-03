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
        int a,b,counted=0;
        cin>>a>>b;
        if(a==b){cout<<"0\n"; continue;}
        while(a!=b)
        {
            if(a<b)
            {
                int x = b-a;
                if(x%2){ a+=x;}
                else a+=x-1;
            }
            elif(a>b)
            {
                int x= a-b;
                if(x==1){a-=2;}
                elif(x%2){ a= a-x-1;}
                else{ a-=x;}
            }
            //cout<<a<<endl;
            counted++;
        }
        cout<<counted<<"\n";

    }

    return 0;
}



