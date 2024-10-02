#include <iostream>
using namespace std;

int n, temp;
int arr[3];

int main(void)
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (auto& it : arr) cin >> it;
		if (arr[0] != -1 && arr[2] != -1 && arr[1] == -1) continue;
		for (const auto& it : arr) {
			if (it != -1) temp = *it;
		}
	}
	return 0;
}