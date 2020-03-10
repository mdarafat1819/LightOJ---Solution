#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        string m1, m2;
        char ch;
        long long int d1, y1, d2, y2, ans;
        cin>>m1>>d1>>ch>>y1;
        cin>>m2>>d2>>ch>>y2;
        if(m1 == "January" || m1 == "February") y1 = y1;
        else y1++;
        if(m2 == "January" || (m2 == "February" && d2 < 29)) y2--;
        ans = (y2/4 - y2/100 + y2/400) - ((y1 - 1)/4 - (y1-1)/100 + (y1 - 1)/400);
        cout<<"Case "<<cs<<": "<<ans<<endl;
    }
    return 0;
}
