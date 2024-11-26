#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

unordered_map<int, int> umap;
unordered_map<int, int> inputOrder;

bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.second == b.second) return inputOrder[a.first] < inputOrder[b.first];
    return a.second > b.second;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N, C;
    cin >> N >> C;

    int tmp, order = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        umap[tmp]++;
        if (inputOrder[tmp] == 0) inputOrder[tmp] = ++order;
    }

    vector<pair<int, int>> vec(umap.begin(), umap.end());
    sort(vec.begin(), vec.end(), compare);

    for (int i = 0; i < vec.size(); i++)
        for (int j = 0; j < vec[i].second; j++)
            cout << vec[i].first << ' ';

    return 0;
}