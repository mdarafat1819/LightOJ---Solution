#include <iostream>

using  namespace std;

int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        int n, mxIdx = 0, minIdx = 0;
        cin>>n;
        string name[n];
        int l, w, h, v[n];
        for(int i = 0; i < n; i++)
        {
            cin>>name[i]>>l>>w>>h;
            v[i] = l * w * h;
        }
        for(int i = 0; i < n; i++)
        {
            if(v[i] > v[mxIdx]) mxIdx = i;
            if(v[i] < v[minIdx]) minIdx = i;
        }
        if(v[mxIdx] == v[minIdx]) cout<<"Case "<<cs<<": no thief"<<endl;
        else cout<<"Case "<<cs<<": "<<name[mxIdx]<<" took chocolate from "<<name[minIdx]<<endl;
    }
    return 0;
}
