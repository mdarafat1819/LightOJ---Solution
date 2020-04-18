#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        double ab, ac, bc, ratio, ad;
        cin>>ab>>ac>>bc>>ratio;
        ratio = 1 / ratio + 1;
        printf("Case %d: %.10lf\n", cs, ab / sqrt(ratio));
    }
    return 0;
}
