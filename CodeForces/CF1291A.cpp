#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k=0;
        int d = s[n-k-1] - '0';
        //cout<<d<<endl;
        while(d%2==0)
        {
            k++;
            d = s[n-k] - '0';
        }
        n -= k;

        int sum =0,index;
        for(int i=0; i<n; i++)
        {
            sum += s[n-i] - '0';
        }
        if(sum%2==0)
        {
            for(int i=0; i<n; i++)
                cout<<s[i];
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                d = s[n-i] - '0';
                if(d%2!=0)
                {
                    index = i;
                    break;
                }
            }

            for(int j=0; j<index; j++)
                cout<<s[j];
            for(int j=index+1; j<n; j++)
                cout<<s[j];
        }
        cout<<endl;



    }
    return 0;
}
