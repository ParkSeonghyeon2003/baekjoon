#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void)
{
	int N, result = 0;
	vector<int> bin;

	cin >> N;

	for (int i = N; i > 0; i /= 2) {
		bin.push_back(i % 2);
	}
	for (int i = 0; i < bin.size(); i++) {
		result += bin[i] * pow(2, bin.size() - i-1);
	}
	cout << result << '\n';
	return 0;
}