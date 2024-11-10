#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int answer = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            answer += i + j;
        }
    }
    cout << answer << '\n';

    return 0;
}