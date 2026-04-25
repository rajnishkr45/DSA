#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int ans = 0;
    int n;
    cout << "Enter any number : ";
    cin >> n;
    int original = n;
    for (int i = 1; n != 0; i++)
    {
        ans = ans * 10 + n % 10;
        n = n / 10;
    }

    cout << "Reverse of " << original << " is : " << ans << endl;

    return 0;
}
