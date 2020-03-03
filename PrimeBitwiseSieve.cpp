///Generating Prime number using less time and space
///it will work up to 10^8 number

#include<bits/stdc++.h>
using namespace std;

int N=100;
int status[100/32];

void sieve();
bool Check(int n,int pos)
{
    return (bool)(n&(1<<pos));
}
int Set(int n,int pos)
{
    return n = n | (1<<pos);
}


int main()
{
    sieve();

    return 0;
}

void sieve()
{
    int i,j,sqrtN;
    sqrtN = int(sqrt(N));
    for(i=3; i<=sqrtN; i+=2)
    {
        if(Check(status[i>>5],i&31)==0)// i/32 == i>>5 and i%32 == i&31
        {
            for(j=i*i; j<=N; j+=i<<1)/// i*2 == i<<1
            {
                status[j>>5] = Set(status[j>>5],j&31);//j/32 == j>>32 and j%31
                ///status j sonkkha ase oitar binary te j%32 tomo position 1ta diye j num hoy ta status a rekhe dey
            }
        }

    }
    puts("2");
    for(i=3; i<=N; i+=2)
        if(Check(status[i>>5],i&31)==0)
            printf("%d\n",i);

}
