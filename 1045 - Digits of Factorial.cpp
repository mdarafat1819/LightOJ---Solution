#include <bits/stdc++.h>
#define SIZE 1000000

using namespace std;

double digit[SIZE];
void digitCount()
{
    for(int i = 1; i <= SIZE; i++)
        digit[i] = digit[i - 1] + log(i);
}
int main()
{
    digitCount();
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int n, base;
        scanf("%d%d", &n, &base);
        printf("Case %d: %d\n", i, (long long int)(digit[n] / log(base)) + 1);
    }
    return 0;
}
