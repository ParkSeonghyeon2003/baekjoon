#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    vector<int> arr(5);
    double avg;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        avg += arr[i];
    }
    sort(arr.begin(), arr.end());
    avg /= 5;
    cout << avg << '\n' << arr[2] << '\n';

    return 0;
}