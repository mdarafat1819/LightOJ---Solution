#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int cs = 1;
    while(t--)
    {
        int yp, lp, time;
        cin>>yp>>lp;
        time = abs(yp - lp) * 4 + yp * 4 + 19;
        cout<<"Case "<<cs<<": "<<time<<endl;
        cs++;
    }

    return 0;
}
