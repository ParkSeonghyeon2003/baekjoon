#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int total, numOfTypes, sum= 0;
	cin >> total >> numOfTypes;
	for (int i = 0; i < numOfTypes; i++) {
		int price, cnt;
		cin >> price >> cnt;
		sum += price * cnt;
	}
	if (total == sum) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}