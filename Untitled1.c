#include<bits/stdc++.h>

using namespace std;
int a[5];
int sum(int a[5])
{
    return a[0]+a[1]+a[2]+a[3]+a[4];
}
int *input(int a[5])
{
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
        return &a;
}
int main()
{
    int a[5];
    input(a);
    output(a[5]);

    sum = sum(a[5]);
}
