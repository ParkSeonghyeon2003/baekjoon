#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    unordered_set<string> log;
    string name, commuteOrNot;
    int n; cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> commuteOrNot;
        if (commuteOrNot == "enter") log.insert(name);
        else log.erase(name);
    }
    vector<string> vec(log.begin(), log.end());
    sort(vec.begin(), vec.end(), greater<string>());
    
    for (auto& it : vec) cout << it << '\n';
    return 0;
}