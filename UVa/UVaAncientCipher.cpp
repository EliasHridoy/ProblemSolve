/// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4085
#include<bits/stdc++.h>
using namespace std;

char msg[101],enmsg[101];

void Cipher();


int main()
{

    while( scanf("%s%s",msg,enmsg)!=EOF )
    {
        //cin>>msg>>enmsg;
        //cout<<enmsg<<msg;
        Cipher();
    }

    return 0;
}


void Cipher()
{
    int i=0;
    int cntenmsg[26]={0},cntmsg[26]={0};

    while(msg[i]!='\0')
    {
        //cout<<msg[i];
        cntmsg[ msg[i] - 65 ]++;
        cntenmsg[ enmsg[i] -65 ]++;
        i++;
    }
    sort(cntenmsg, cntenmsg+26);
    sort(cntmsg, cntmsg+26);

    bool possible=true;
    for(int i=0;i<26; i++)
    {
        //cout<<cntenmsg[i]<<" "<<cntmsg[i]<<endl;
        if(cntenmsg[i]!=cntmsg[i])
        {
            possible=false;
            break;
        }
    }

    if(possible) cout<<"YES\n";
    else         cout<<"NO\n";
}
