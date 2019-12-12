#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define PI 2 * acos (0.0)
int main()
{
    int t;
    cin>>t;
    int cs = 1;
    while(t--)
    {
        double r, as, ac, ash;
        cin>>r;
        ac = PI * r * r;
        as = 4.0 * r * r;
        ash = as - ac;
        cout<<"Case "<<cs<<": ";
        printf("%.2lf\n", ash);
        cs++;
    }
    return 0;
}
