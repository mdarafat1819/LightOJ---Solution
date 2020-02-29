#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double areaOfTriangle(double a, double b, double c)
{
    double area, s = (a + b + c) / 2;
    area = s * (s - a) * (s - b) * (s - c);
    area = sqrt(area);
    return area;
}
int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
    double r1, r2, r3, a, b, c, A, B, C, area;
    cin>>r1>>r2>>r3;
    a = r1 + r2;
    b = r2 + r3;
    c = r3 + r1;
    area = areaOfTriangle(a, b, c);
    A = acos((b*b + c*c - a*a) / (2 * b * c));
    B = acos((a*a + c*c - b*b) / (2 * a * c));
    C = acos((a*a + b*b - c*c) / (2 * a * b));
    A = .5 * r3 * r3 * A;
    B = .5 * r1 * r1 * B;
    C = .5 * r2 * r2 * C;
    area = area - (A + B + C);
    printf("Case %d: %lf\n",i, area);
    }

    return 0;
}
