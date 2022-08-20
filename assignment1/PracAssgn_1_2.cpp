#Both problems 1 and 2 are similar and hence the same code

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    // Subtracting the numbers till they become equal.
    while (a != b)
    {
        if (a > b) a = a - b;
        else if (a < b) b = b - a; 
    }
    cout << a;
    
    return 0;
}
