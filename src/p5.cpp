#include <iostream>
#include <stdio.h>
using namespace std;

void river(int a,char from,char aux,char to)
{
    if (a==1)
    {
        cout << "Move disk 1 from "<<from << " to " << aux << "\n";
        cout << "Move disk 1 from "<<aux << " to " << to << "\n";
        return;
    }

    river (a-1,from,to,aux); 
    cout << "Move disk "<< a <<" from "<<from << " to " << aux << "\n";
    cout << "Move disk "<< a <<" from "<<aux << " to " << to << "\n";

    river (a-1,aux,from,to);
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
