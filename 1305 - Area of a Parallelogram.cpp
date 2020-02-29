#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
    int x[4], y[4];
    for(int i = 0; i < 3; i++) cin>>x[i]>>y[i];
    long long int area;
    x[3] = x[0] + x[2] - x[1];
    y[3] = y[0] + y[2] - y[1];
    area = (x[0]*(y[1]-y[2]) + x[1]*(y[2]-y[0]) + x[2]*(y[0]-y[1]));
    cout<<"Case "<<cs<<": "<<x[3]<<" "<<y[3]<<" "<<abs(area)<<endl;
    }

    return 0;
}
