#include <iostream>
#include <unordered_set>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N, M, tmp;
    unordered_set<int> us;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        us.insert(tmp);
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> tmp;
        if (us.count(tmp) == 1) cout << "1\n";
        else cout << "0\n";
    }

    return 0;
}