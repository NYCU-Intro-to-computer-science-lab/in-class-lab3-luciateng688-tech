// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;

int sum(int n)
{
    int summ;
    summ=(1+n)*n/2;
    return summ;
}

int long long fratorial(int n)
{
    int a=1;
    for(int i; i<n ;i++)
    {
        a=a*n*(n-1);
        n=n-1;
        if (n==0)
        break;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    cout << fratorial(n)<<"\n";
    cout <<sum(n);
    return 0;
}
