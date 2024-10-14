#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    set<string> pairs;
    string colors[4];

    for (auto& elem : colors) cin >> elem;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            pairs.insert(colors[i] + ' ' + colors[j]);
    for (auto& elem : pairs) cout << elem << '\n';
    return 0;
}