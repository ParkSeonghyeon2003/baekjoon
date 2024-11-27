#include <iostream>
#include <unordered_map>
#include <queue>

#define LL long long

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int tmp;

    unordered_map<string, priority_queue<int>> umap;
    LL total = 0;
    int Q;
    cin >> Q;

    for (int line = 0; line < Q; line++)
    {
        int query;
        string name;

        cin >> query;

        if (query == 1)
        {
            int k;
            cin >> name >> k;
            for (int i = 0; i < k; i++)
            {
                cin >> tmp;
                umap[name].push(tmp);
            }
        }
        else
        {
            int b;
            cin >> name >> b;
            if (umap[name].empty()) continue;
            b = b > umap[name].size() ? umap[name].size() : b;
            for (int i = 0; i < b; i++)
            {
                total += umap[name].top();
                umap[name].pop();
            }
        }
    }
    cout << total << '\n';

    return 0;
}