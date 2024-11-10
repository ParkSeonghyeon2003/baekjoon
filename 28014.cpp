#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int prevHeight = 0, pushing = 0;
    int towerN;
    cin >> towerN;

    int temp;
    for (int i = 0; i < towerN; i++)
    {
        cin >> temp;
        if (prevHeight <= temp) pushing++;
        prevHeight = temp;
    }
    cout << pushing << '\n';

    return 0;
}