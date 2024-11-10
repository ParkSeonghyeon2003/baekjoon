#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    
    // ���� �Է�
    vector<int> profit(n);
    for (auto& iter : profit) cin >> iter;
    
    vector<int> pSorted(profit);
    sort(pSorted.begin(), pSorted.end(), greater<int>());

    // ������ �Է� �ް� ������ ���
    for (int i = 0; i < n; i++)
    {
        int price;
        cin >> price;

        // �ڽ��� ������ ���� �� ū �� ã��
        int maxProf = (profit[i] == pSorted[0]) ? pSorted[1] : pSorted[0];

        // ������ ��� �� ���
        cout << profit[i] - (maxProf - price) - price << ' ';
    }

    return 0;
}