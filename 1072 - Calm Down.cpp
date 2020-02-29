#include <iostream>
#include <bits/stdc++.h>

#define PI acos(-1)

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        double R, n, thita, r;
        cin>>R>>n;
        thita = PI / n;
        r = (R * sin(thita)) / (1 + sin(thita));
        printf("Case %d: %lf\n",i, r);
    }

    return 0;
}
