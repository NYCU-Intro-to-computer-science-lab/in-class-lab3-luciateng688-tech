#include <iostream>
#include <stdio.h>
using namespace std;

void river(int a,char from,char temp,char to)
{
    if (a==1)
    {
        cout << "Move disk 1 from "<<from << " to " << to << "\n";
        return;
    }

    river (a-1,from,to,temp); 
    cout << "Move disk "<< a <<" from "<<from << " to " << to << "\n";

    river (a-1,temp,from,to);
}

int main()
{
    int a;
    while(cin >> a) 
    {
        river (a,'1','2','3');
        cout << "\n";
    }
    return 0;
}
