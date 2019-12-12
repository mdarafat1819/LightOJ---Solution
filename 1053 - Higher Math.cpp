#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int cs = 1;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if((a*a == b*b + c*c)||(b*b == c*c + a*a)||(c*c == a*a + b*b))
            cout<<"Case "<<cs<<": yes"<<endl;
        else
            cout<<"Case "<<cs<<": no"<<endl;
        cs++;
    }
    return 0;
}
