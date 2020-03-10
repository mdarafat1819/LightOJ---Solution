#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int cs = 1; cs <= t; cs++)
    {
    int cnt1[26] = {0}, cnt2[26] = {0}, flag = 0;
    string name1, name2;
    getline(cin, name1);
    getline(cin, name2);
    for(int i = 0; i < name1.length(); i++)
        cnt1[toupper(name1[i]) - 65]++;
    for(int i = 0; i < name2.length(); i++)
        cnt2[toupper(name2[i]) - 65]++;
    for(int i = 0; i < 26; i++)
    {
        if(cnt1[i] != cnt2[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag) cout<<"Case "<<cs<<": No"<<endl;
    else cout<<"Case "<<cs<<": Yes"<<endl;
    }
    return 0;
}
