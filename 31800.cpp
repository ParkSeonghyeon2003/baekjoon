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
    
    // 이익 입력
    vector<int> profit(n);
    for (auto& iter : profit) cin >> iter;
    
    vector<int> pSorted(profit);
    sort(pSorted.begin(), pSorted.end(), greater<int>());

    // 가격을 입력 받고 순수익 계산
    for (int i = 0; i < n; i++)
    {
        int price;
        cin >> price;

        // 자신을 제외한 이익 중 큰 값 찾기
        int maxProf = (profit[i] == pSorted[0]) ? pSorted[1] : pSorted[0];

        // 순이익 계산 후 출력
        cout << profit[i] - (maxProf - price) - price << ' ';
    }

    return 0;
}