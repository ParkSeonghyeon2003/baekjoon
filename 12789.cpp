#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    stack<int> stk;
    int N, number;
    int find = 1;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> number;
        if (number != find) stk.push(number);
        else find++;
        while (!stk.empty() && stk.top() == find)
        {
            stk.pop();
            find++;
        }
    }
    if (stk.empty()) cout << "Nice\n";
    else cout << "Sad\n";

    return 0;
}