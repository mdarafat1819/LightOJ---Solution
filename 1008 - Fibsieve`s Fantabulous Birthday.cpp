#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ///freopen("input.txt", "r", stdin);
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        long long int n, x, y;
        cin>>n;
        long long int rc = sqrt(n);
        if(rc * rc != n) rc++;
        long long int midx = rc;
        long long int midy = rc;
        long long int mx = rc * rc;
        long long int mn = mx - (rc -1) * 2;
        long long int mid = mn + (mx - mn) / 2;
        if(n == mid)
        {
            x = midx;
            y = midy;
        }
        else if(n > mid)
        {
            y = rc;
            x = midx - (n - mid);
        }
        else
        {
            x = rc;
            y = midy - (mid - n);
        }
        if(!(rc % 2)) swap(x, y);
        cout<<"Case "<<i<<": "<<x<<" "<<y<<endl;
    }
    return 0;
}
