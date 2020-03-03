//http://codeforces.com/contest/1303/problem/A
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
        string s;
        cin>>s;
        int l=-1,r=-1;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1' && l==-1)
                l = i;
            if(l>=0 && s[i]=='1')
                r=i;
        }
        int cnt=0;
        //cout<<l<<" "<<r<<endl;
        for(int i=l+1; i<r; i++)
        {
            if(s[i]=='0')
                cnt++;
        }
        cout<<cnt<<"\n";
    }

    return 0;
}

