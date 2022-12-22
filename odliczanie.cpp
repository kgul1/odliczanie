#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    for(int i=10; i>=0;i--)
    {
        Sleep(250);
        cout<< i <<endl;
    }
    cout<<"koniec";
    return 0;
}
