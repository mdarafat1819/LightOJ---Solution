#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, dust;
    cin>>t;
    int cs = 1;
    while(t--)
    {
        int n, sum = 0;
        cin>>n;
        for(int i = 0; i<n; i++)
        {
            cin>>dust;
            if(dust<0)
                continue;
            sum += dust;
        }
        cout<<"Case "<<cs<<": "<<sum<<endl;
        cs++;

    }
    return 0;
}
