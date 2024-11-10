#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << string(n - i - 1, ' ') << '*';
        if (i > 0)
            cout << string(i * 2 - 1, (i != n - 1) ? ' ' : '*') << '*';
        cout << '\n';
    }
    return 0;
}