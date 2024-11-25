#include <iostream>
#include <unordered_set>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    unordered_set<int> uset;
    int aSize, bSize, tmp;
    int cnt = 0;

    cin >> aSize >> bSize;
    for (int i = 0; i < aSize; i++)
    {
        cin >> tmp;
        uset.insert(tmp);
        cnt++;
    }
    for (int i = 0; i < bSize; i++)
    {
        cin >> tmp;
        if (uset.count(tmp) == 0) cnt++;
        else cnt--;
    }
    cout << cnt << '\n';

    return 0;
}