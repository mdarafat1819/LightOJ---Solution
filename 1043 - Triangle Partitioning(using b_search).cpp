#include <bits/stdc++.h>

using namespace std;

double areaOfTriangle(double ab, double bc, double ac)
{
    double s = (ab + bc + ac) / 2.0;
    return sqrt(s * (s - ab) * (s - bc) * (s - ac));
}
double ratio_calculate(double ab, double bc, double ac, double ad)
{
    double de, ae, s_triangle, l_triangle;
    de = (ad * bc) / ab;
    ae = (ac * ad) / ab;
    s_triangle = areaOfTriangle(ad, de, ae);
    l_triangle = areaOfTriangle(ab, bc, ac);
    return (s_triangle / (l_triangle - s_triangle));
}
double b_search(double ab, double bc, double ac, double r)
{
    double ad = ab, l = 0.0, mid;
    int t = 100;
    while(t--)
    {
        mid = (l + ad) / 2.0;
        double ratio = ratio_calculate(ab, bc, ac, mid);
        if(ratio == r) return mid;
        else if(ratio > r) ad = mid;
        else l = mid;
    }
    return mid;
}

int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs <= t; cs++)
    {
        double ab, bc, ac, r, ad, l = 0.0, mid;
        cin>>ab>>ac>>bc>>r;
        printf("Case %d: %.10lf\n", cs, b_search(ab, bc, ac, r));
    }
    return 0;
}
