#include <bits/stdc++.h>

using namespace std;

long long fact(int n)
{
    if(!n || n == 1) return 1;
    return fact(n - 1) * n;
}
int main()
{
    int t;
    scanf("%d", &t);
    long long int ara[21];
        for(int i = 0; i <= 20; i++)
            ara[i] = fact(i);
    for(int cs = 1; cs <= t; cs++)
    {
        long long int n, res[20], idx = 0;
        scanf("%lld", &n);
        for(int i = 20; i >= 0; i--)
        {
            if(n >= ara[i])
            {
                res[idx] = i;
                idx++;
                n -= ara[i];
            }
        }
        if(!n)
        {
            printf("Case %d: ", cs);
            for(int i = idx - 1; i >= 0; i--)
            {
                if(!i) printf("%d!\n",res[i]);
                else printf("%d!+",res[i]);
            }
        }
        else printf("Case %d: impossible\n", cs);
    }
    return 0;
}
