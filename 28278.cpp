#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int N;
    cin >> N;

    vector<int> stack;
    int oper, num;
    for (int i = 0; i < N; i++)
    {
        cin >> oper;
        if (oper == 1)
        {
            cin >> num;
            stack.push_back(num);
        }
        else if (oper == 2)
        {
            if (stack.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << stack.back() << '\n';
                stack.pop_back();
            }
        }
        else if (oper == 3)
        {
            cout << stack.size() << '\n';
        }
        else if (oper == 4)
        {
            if (stack.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (oper == 5)
        {
            if (stack.empty()) cout << -1 << '\n';
            else cout << stack.back() << '\n';
        }
    }

    return 0;
}