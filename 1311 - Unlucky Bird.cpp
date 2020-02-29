#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        double v1, v2, v3, a1, a2, t;
        cin>>v1>>v2>>v3>>a1>>a2;
        t = max(v1 / a1, v2 / a2);
        cout<<"Case "<<i<<": ";
        printf("%lf %lf\n",(v1 * v1) / (2 * a1) + (v2 * v2) / (2 * a2),v3 * t);
    }
    return 0;
}
