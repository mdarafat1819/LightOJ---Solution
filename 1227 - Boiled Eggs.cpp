#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        int n, p, q, cnt = 0, sum = 0;
        cin>>n>>p>>q;
        int ara[n];
        for(int i = 0; i < n; i++) cin>>ara[i];
        for(int i = 0; i < n; i++)
        {
            sum += ara[i];
            if(sum > q || (cnt == p)) break;
            cnt++;
        }
        cout<<"Case "<<cs<<": "<<cnt<<endl;
    }

    return 0;
}
