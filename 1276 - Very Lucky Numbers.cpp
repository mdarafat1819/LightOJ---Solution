#include <bits/stdc++.h>

#define SIZE 1000000000000

using namespace std;

typedef long long ll;

vector <ll> lucky, vlucky;

void generate_lucky(ll n)
{
    if(n < SIZE)
    {
        lucky.push_back(n);
        generate_lucky(n * 10 + 4);
        generate_lucky(n * 10 + 7);
    }
}

void generate_very_lucky(ll i, ll n)
{
    if(i >= lucky.size()) return;
    for(int j = i; j < lucky.size(); j++)
    {
        long long temp = n * lucky[j];
        if(temp <= 0 || temp >= SIZE) return;
        vlucky.push_back(temp);
        generate_very_lucky(j, temp);
    }
}

int main()
{
    generate_lucky(0);
    sort(lucky.begin(), lucky.end());
    generate_very_lucky(1, 1);
    set<ll> s(vlucky.begin(),vlucky.end());
    vector <ll> v(s.begin(), s.end());

    ll t, a, b, up, low;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        cin>>a>>b;
        up = upper_bound(v.begin(), v.end(), b) - v.begin();
        low = lower_bound(v.begin(), v.end(), a) - v.begin();
        cout<<"Case "<<i<<": "<<up - low<<endl;
    }
    return 0;
}
