#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,sum=0;
    scanf("%d", &n);
    int a[3];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &a[j]);
            if(a[j]==1)cnt++;
        }
        if(cnt>=2)
        {
            sum = sum+1;
        }
            cnt=0;
    }
    printf("%d", sum);
}

