///https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=342
#include<bits/stdc++.h>
using namespace std;




int main()
{
    char revlet[26]= {0},revnum[9]= {0};
    revlet['A'-'A'] = 'A';
    revlet['E'-'A'] = '3';
    revlet['H'-'A'] = 'H';
    revlet['I'-'A'] = 'I';
    revlet['J'-'A'] = 'L';
    revlet['L'-'A'] = 'J';
    revlet['M'-'A'] = 'M';
    revlet['O'-'A'] = 'O';
    revlet['S'-'A'] = '2';
    revlet['T'-'A'] = 'T';
    revlet['U'-'A'] = 'U';
    revlet['V'-'A'] = 'V';
    revlet['W'-'A'] = 'W';
    revlet['X'-'A'] = 'X';
    revlet['Y'-'A'] = 'Y';
    revlet['Z'-'A'] = '5';
    revnum['1'-'0'] = '1';
    revnum['2'-'0'] = 'S';
    revnum['3'-'0'] = 'E';
    revnum['5'-'0'] = 'Z';
    revnum['8'-'0'] = '8';
    revnum['0'-'0'] = 'O';



    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    string s;
    while(cin>>s)
    {
        int n = s.length();
        bool palindrome=true, mirror=true;
        for(int i=0; i<=n/2; i++)
        {
            int j = n - i -1;
            if(s[i]!=s[j])
            {
                palindrome = false;
            }
            if( (s[i]>='A' && s[i]<='Z' && revlet[s[i]-'A']!=s[j]) || (s[i]>='1' && s[i]<='9' && revnum[s[i]-'0']!=s[j]) )
            {
                //cout<<s[i]<<" "<<s[j]<<endl;
                //cout<<revlet[s[i]-'A']<<" "<<revnum[s[i]-'0']<<endl;
                mirror = false;
            }
        }
        if(palindrome && mirror)
        {
            cout<<s<<" -- is a mirrored palindrome.\n\n";
        }
        else if(palindrome)
        {
            cout<<s<<" -- is a regular palindrome.\n\n";
        }
        else if(mirror)
        {
            cout<<s<<" -- is a mirrored string.\n\n";
        }
        else
            cout<<s<<" -- is not a palindrome.\n\n";
    }

    return 0;
}
