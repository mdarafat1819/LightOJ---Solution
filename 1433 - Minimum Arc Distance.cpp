#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        double ax, ay, bx, by, ox, oy, redius, base, angle;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        redius = (ax - ox)*(ax - ox) + (ay - oy)*(ay - oy);
        base = sqrt(((ax - bx) * (ax - bx) + (ay - by)*(ay - by)));
        angle = acos(((2 * redius) - base * base) / (2 * redius));
        printf("Case %d: %lf\n", i, sqrt(redius) * angle);
    }

    return 0;
}
