/*Solution:
n = 12, m = 3;
=>sum = -1-2-3+4+5+6-7-8-9+10+11+12
     = (4-1)+(5-2)+(6-3)+(10-7)+(11-8)+(12-9)
     = 3 + 3 + 3 + 3 + 3 + 3
     = 18
=>sum = (12 / 2)*3
      = (n / 2) * m
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, cs = 1;
    cin>>t;
    while(t--)
    {
        long int n, m, sum = 0;
        cin>>n>>m;
        sum = (n / 2) * m;
        cout<<"Case "<<cs<<": "<<sum<<endl;
        cs++;
    }
    return 0;
}
