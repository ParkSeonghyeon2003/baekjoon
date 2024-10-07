#include <iostream>
using namespace std;

int A, B, C, count, cost;
pair<int, int> arr[3];

int main(void)
{
	cin >> A >> B >> C;
	for (auto& it : arr) cin >> it.first >> it.second;
	for (int i = 1; i <= 100; i++) {
		count = 0;
		for (const auto& it : arr) {
			if (it.first <= i && i < it.second) count++;
		}
		switch (count) {
		case 1:
			cost += A;
			break;
		case 2:
			cost += 2*B;
			break;
		case 3:
			cost += 3*C;
			break;
		default:
			break;
		}
	}
	cout << cost << '\n';
	return 0;
}