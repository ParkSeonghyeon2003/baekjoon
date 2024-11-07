#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int N;
    cin >> N;

    string oper;
    int num;
    queue<int> queue;
    for (int i = 0; i < N; i++)
    {
        cin >> oper;
        if (oper == "push")
        {
            cin >> num;
            queue.push(num);
        }
        else if (oper == "pop")
        {
            if (queue.empty()) cout << -1 << '\n';
            else
            {
                cout << queue.front() << '\n';
                queue.pop();
            }
        }
        else if (oper == "size")
        {
            cout << queue.size() << '\n';
        }
        else if (oper == "empty")
        {
            if (queue.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (oper == "front")
        {
            if (queue.empty()) cout << -1 << '\n';
            else cout << queue.front() << '\n';
        }
        else if (oper == "back")
        {
            if (queue.empty()) cout << -1 << '\n';
            else cout << queue.back() << '\n';
        }
    }
    return 0;
}