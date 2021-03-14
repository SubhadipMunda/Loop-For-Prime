//taking input and checking a number is prime or not using for loop

#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    for (int a = 1; a <= n; a++)
    {
        if ((n % a) == 0)
        {
            s = s + 1; // if the number is prime, s should be 2, as prime number is divisable by "1" and the number itself
        }
    }
    if (s == 2) // checking the number is 2 or not
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }

    return 0;
}