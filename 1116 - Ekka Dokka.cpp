#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        long long int w, flag = 1;
        cin>>w;
        if(!(w % 2))
        {
            for(long long int i = 2; i <= w / 2; i ++)
            {
                if(!(w % i) && ((w / i) % 2))
                {
                    cout<<"Case "<<cs<<": "<<w / i <<" "<<i<<endl;
                    flag = 0;
                    break;
                }
            }
        }
        if(flag) cout<<"Case "<<cs<<": Impossible"<<endl;
    }

    return 0;
}
