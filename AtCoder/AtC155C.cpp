#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<map>
using std::map;

#include <string>
using std::string;

#define ll long long

#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)
map<string,int> memo;
int main()
{

        ll n;
        cin>>n;
        filoop(n)
        {
            string s;
            cin>>s;
            memo[s] +=1;
        }
        int mx = 0;
        map<string,int>::iterator it;
       for( it = memo.begin(); it!=memo.end(); it++)
        {
            int tmp = it->second;
            if(mx<tmp) mx = tmp;
        }

        for(it = memo.begin(); it!=memo.end(); it++)
        {
            if(it->second==mx) cout<< it->first<<"\n";
        }


    return 0;
}



