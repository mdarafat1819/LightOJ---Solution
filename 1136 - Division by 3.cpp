#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        int left, right, res1, res2;
        cin>>left>>right;
        res1 = ((left - 1) / 3) * 2;
        if((left - 1) % 3 == 2) res1++;
        res2 = (right / 3) * 2;
        if(right % 3 == 2) res2++;
        printf("Case %d: %d\n", i, res2 - res1);
    }

    return 0;
}
