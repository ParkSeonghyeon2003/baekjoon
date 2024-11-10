#include <iostream>
using namespace std;

int N, K, loc, newItem, saveCnt, result = -1;
int* arr = nullptr;

void insertionSort(int* arr) {
	for (int i = 1; i < N; i++) {
		loc = i - 1;
		newItem = arr[i];

		while (0 <= loc && newItem < arr[loc]) {
			arr[loc + 1] = arr[loc];
			if (++saveCnt == K) result = arr[loc];
			loc--;
		}
		if (loc + 1 != i) {
			arr[loc + 1] = newItem;
			if (++saveCnt == K) result = newItem;
		}
	}
}

int main(void)
{
	cin >> N >> K;
	arr = new int[N];
	for (int i = 0; i < N; i++) cin >> arr[i];
	insertionSort(arr);
	cout << result << '\n';
	delete[] arr;
	return 0;
}