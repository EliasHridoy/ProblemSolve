///https://codeforces.com/problemset/problem/798/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    bool list[15];
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    cin>>s;
    int len = s.length() - 1;
    for(int i=0; i<=len/2; i++)
    {
        int j = len -i;
        if(s[i]==s[j])
            {list[i] = true;
            list[j] = true;
            }
        else
        {
            list[i] = false;
            list[j] = false;
        }

    }
    int cnt=0;
    for(int i=0; i<=len; i++)
    {
        if(list[i]==false)
        {
            cnt++;
            //cout<<cnt<<endl;
        }
    }

    if(cnt==2 ||(len%2==0&&cnt==0))
    {
        printf("YES\n");
    }
    else{
    printf("NO\n");
    }

    return 0;
}
