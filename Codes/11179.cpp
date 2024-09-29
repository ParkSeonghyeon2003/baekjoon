#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N;
	vector<int> bin;

	cin >> N;

	for (int i = N; i > 0; i /= 2) {
		bin.push_back(i % 2);
	}

	for (int i = 0; i < bin.size(); i++) {
		cout << bin[i];
	}
	return 0;
}