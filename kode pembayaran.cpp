#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
int main()
{
    int rand(void);
    for (int i = 0; i < 5; i++)
    {
        cout << rand() << " ";
    }
}
