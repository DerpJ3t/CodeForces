#include <iostream>
using namespace std;

int main()
{
    int n, i(0), a[7];
    cin >> n;
    for (int i = 0; i < 7; i++) cin >> a[i];
    int t = a[0];

    while (t < n)
    {
        i++;
        i %= 7; //if exceeds 6 go back to 0 ( im so dumb to not think of this)
        t += a[i];
    }

    cout << i + 1 << endl;
    return 0;
}