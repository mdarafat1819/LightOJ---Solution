#include <bits/stdc++.h>
#define M 10000007

using namespace std;
typedef long long int lli;
lli ara[100001];

int main()
{
    int t, n;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        for(int j = 0; j < 6; j++) cin>>ara[j];
        cin>>n;
        for(int j = 6; j <= n; j++)
            ara[j] = (ara[j-1]+ara[j-2]+ara[j-3]+ara[j-4]+ara[j-5]+ara[j-6]) % M;
        cout<<"Case "<<i<<": "<<ara[n] % M<<endl;
    }
    return 0;
}
