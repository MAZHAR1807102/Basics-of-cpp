#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, a, x, y, flagstones;
    scanf("%I64d%I64d", &n, &m);
    scanf("%I64d", &a);
    x=n/a;
    y=m/a;
    if(n%a!=0)
        ++x;
    if(m%a!=0)
        ++y;
    flagstones=(x*y);
    printf("%I64d", flagstones);
    return 0;
}
