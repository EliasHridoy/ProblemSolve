/// https://codeforces.com/contest/1294/problem/B
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        pair<int,int> cords[n];
        while(n--)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            cords[n].first = x;
            cords[n].second = y;
        }
        sort(cords,cords+n);
        ///debug
        n = 5;

            cout<<cords[n].first<<" "<<cords[n].second<<endl;

    }

    return 0;
}
