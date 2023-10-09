#include<iostream>

using namespace std;
int add(int a, int b = 2);
int main()
{
    int sum = 0;
    sum = add(10,5);
    cout << sum << endl;
    sum = add(10);
    cout << sum << endl;
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

