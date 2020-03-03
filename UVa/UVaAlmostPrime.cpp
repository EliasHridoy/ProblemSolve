#include<bits/stdc++.h>
using namespace std;

#define Size 1000001
#define ll long long int

//vector<long long> ans;
int N,status[Size]= {0}, e=-1;
ll x,y,prime[78500];

void seive()
{
    status[0]=1; status[1]=1;
    for(int i=4; i<Size; i+=2)
        status[i] = 1;
    for(int i=3; i<=sqrt(Size); i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i; j<= Size; j+=i*2)
            {
                status[j] = 1;
            }
        }
    }
    for(int i=0; i<Size; i++)
    {
        if(status[i]==0)
            prime[e++] = i;
    }
    cout<<"E "<<prime[0]<<endl;
    for(int i=0; i<e; i++)
    {
        printf("%d\n",prime[i]);
    }
}


ll AlmostPrime()
{
    ll cnt =0;
    for(ll i = 0; i<Size; i++)
    {
        if(status[i]==0)
        {
            //printf("%d\n",i);
            for(ll j=i*i; j<=1000000000001; j*=i )
            {
                //printf("%lld\n ",j);

            }
        }
    }
    return cnt;
}



int main()
{
    //freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    seive();

      //for(int i=0; i<sizeof(almostPrime); i++)
         //printf("%d \n",almostPrime.end());
    //cout<<"end"<<endl;
    int T;
    cin>>T;
    while(T--)
    {
        scanf("%d%d",&x,&y);

        //printf("%lld\n", AlmostPrime());
    }


    return 0;
}

