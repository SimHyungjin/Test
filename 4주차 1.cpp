#include <iostream>
using namespace std;

bool myExp(int base, int exp)
{
    int i;
    int result = 1;
    for (i = 0; i < exp; i++)
        result *= base;
    if (base > 0 && exp >= 0)
    {
        throw result;
    }
    else {
        throw -1;
    }
}


int main(int argc, char const* argv[])
{
    int num1, num2;
    cin >> num1 >> num2;
    try {
        myExp(num1, num2);
    }
    catch (bool ex)
    {
        cout << ex << endl;
    }
    return 0;
}