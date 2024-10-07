#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n, e, width = 0, height = 0, temp;
	cin >> n >> e;
	if (n != 1) {
		for (int i = 0; i < n - 1; i++) {
			cin >> temp;
			width += temp;
		}
	}
	if (e != 1) {
		for (int i = 0; i < e - 1; i++) {
			cin >> temp;
			height += temp;
		}
	}
	cout << ceil(sqrt(width * width + height * height)) << '\n';
	return 0;
}