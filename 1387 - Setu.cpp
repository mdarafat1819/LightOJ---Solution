#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        int n, dont, amount = 0;
        cin>>n;
        cout<<"Case "<<cs<<":"<<endl;
        for(int i = 0; i < n; i++)
        {
            string command;
            cin>>command;
            if(command == "donate")
            {
                cin.ignore();
                cin>>dont;
                amount += dont;
            }
            else if(command == "report") cout<<amount<<endl;
        }
    }
    return 0;
}
