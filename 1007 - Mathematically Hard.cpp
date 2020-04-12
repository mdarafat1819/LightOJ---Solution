#include<bits/stdc++.h>

#define SIZE 5000001

using namespace std;

unsigned long long int phi[SIZE];
bool mark[SIZE];

void sieve_phi()
{
    for(int i = 1; i < SIZE; i++) phi[i] = i;
    for(int i = 2; i < SIZE; i++)
    {
        if(!mark[i])
        {
            for(int j = i; j < SIZE; j += i)
            {
                phi[j] -= (phi[j] / i);
                mark[j] = true;
            }
        }
        phi[i] = phi[i-1] + phi[i] * phi[i];
    }
}
int main()
{
    sieve_phi();
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        int a, b;
        cin>>a>>b;
        cout<<"Case "<<cs<<": "<<phi[b] - phi[a-1]<<endl;
    }
    return 0;
}
