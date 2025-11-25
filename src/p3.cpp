// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
#include <cmath>
using namespace std;

int func(int n)
{
    for(int i=0;i<n;i++)
    {
        int x=i;
        n=x+(n-x);
    for (int j=0 ; j<(x/2) ; i++)
      {
        if(x%i>0 && (x-1)%i>0)
        break;
      }
    return x ;
    }
}

int main()
{
    int n;
    cin>>n;
    cout << func(n);
    return 0;
}
