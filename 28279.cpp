#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N;
    cin >> N;

    int oper, number;
    deque<int> deq;
    for (int i = 0; i < N; i++)
    {
        cin >> oper;
        if (oper == 1)
        {
            cin >> number;
            deq.push_front(number);
        }
        else if (oper == 2)
        {
            cin >> number;
            deq.push_back(number);
        }
        else if (oper == 3)
        {
            if (deq.empty()) cout << -1 << '\n';
            else
            {
                cout << deq.front() << '\n';
                deq.pop_front();
            }
        }
        else if (oper == 4)
        {
            if (deq.empty()) cout << -1 << '\n';
            else
            {
                cout << deq.back() << '\n';
                deq.pop_back();
            }
        }
        else if (oper == 5)
        {
            cout << deq.size() << '\n';
        }
        else if (oper == 6)
        {
            if (deq.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (oper == 7)
        {
            if (deq.empty()) cout << -1 << '\n';
            else cout << deq.front() << '\n';
        }
        else if (oper == 8)
        {
            if (deq.empty()) cout << -1 << '\n';
            else cout << deq.back() << '\n';
        }
    }

    return 0;
}