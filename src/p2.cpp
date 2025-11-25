// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>
using namespace std;

int func(int a,int b)
{
    while (true)
    {
        int c;
        c=a%b;
        if(c==0)
        break;
        a=b;
        b=c;
    }
    return b;
}

int main()
{
    int a,b;
    cin>>a1>>b;
    cout <<func(a,b);
    return 0;
}
