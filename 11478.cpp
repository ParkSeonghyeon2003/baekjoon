#include <iostream>
#include <unordered_set>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    unordered_set<string> uset;
    string str, tmp = "";
    int strlen;
    
    cin >> str;
    strlen = str.length();
    for (int i = 0; i < strlen; i++)
    {
        for (int j = 0; j < strlen - i; j++)
        {
            tmp = str.substr(i, j + 1);
            uset.insert(tmp);
        }
    }
    cout << uset.size() << '\n';

    return 0;
}