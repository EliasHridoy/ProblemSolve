///http://codeforces.com/contest/1300/problem/A
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
        int n,cnt=0;;
        cin>>n;
        int a[100];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                cnt++;
                a[i]=1;
            }
        }
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }
        if(sum==0)
            {
                cnt++;
            }
            cout<<cnt<<"\n";
    }

    return 0;
}

