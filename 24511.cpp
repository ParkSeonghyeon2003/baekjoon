#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    vector<int> isStack, qs;
    queue<int> que;
    int N, inTmp, M, tmp;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> inTmp;
        isStack.push_back(inTmp);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> inTmp;
        if (!isStack[i]) qs.push_back(inTmp);
    }
    while (!qs.empty())
    {
        que.push(qs.back());
        qs.pop_back();
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> inTmp;
        que.push(inTmp);
        cout << que.front() << ' ';
        que.pop();
    }

    return 0;
}