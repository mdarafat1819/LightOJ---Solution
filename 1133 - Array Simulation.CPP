#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, d, t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        cin>>n>>m;
        int ara[n];
        for(int i = 0; i < n; i++) cin>>ara[i];
        while(m--)
        {
            char op;
            cin>>op;
            if(op == 'S')
            {
                cin>>d;
                for(int i = 0; i < n; i++) ara[i] += d;
            }
            else if(op == 'M')
            {
                cin>>d;
                for(int i = 0; i < n; i++) ara[i] *= d;
            }
            else if(op == 'D')
            {
                cin>>d;
                for(int i = 0; i < n; i++) ara[i] /= d;
            }
            else if(op == 'R')
            {
                reverse(ara, ara + n);
            }
            else if(op == 'P')
            {
                int x, y;
                cin>>x>>y;
                swap(ara[x], ara[y]);
            }
        }
        cout<<"Case "<<cs<<":"<<endl;
        for(int i = 0; i < n; i++)
        {
            if(i == (n - 1)) cout<<ara[i]<<endl;
            else cout<<ara[i]<<" ";
        }
    }
    return 0;
}
