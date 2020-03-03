
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
        int one=0,two=0;
        set<char> ad[26];

        for(int i=0;i<s.length()-1; i++)
        {
            ad[s[i] -'a'].insert(s[i+1]);
            ad[s[i+1] -'a'].insert(s[i]);
        }
        for(int i=0;i<s.lenght(); i++)
        {
            if(ad.size()>)
        }

    }

    return 0;
}


