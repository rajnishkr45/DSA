#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    cout << "Enter any decimal number : ";
    cin >> n;
    int i;
    for (i = 0; n != 0; i++)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
    }

    cout << "Binary of " << n << " is : " << ans << endl;

    return 0;
}
