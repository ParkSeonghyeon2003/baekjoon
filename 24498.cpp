#include <iostream>
#include <vector>
using namespace std;

int N, maxV, temp;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) cin >> v[i];
	for (int i = 1; i < N - 1; i++) {
		temp = min(v[i - 1], v[i + 1]);
		maxV = maxV > v[i] + temp ? maxV : v[i] + temp;
	}
	temp = maxV > v[N - 1] ? maxV : v[N - 1];
	maxV = v[0] > temp ? v[0] : temp;
	cout << maxV << '\n';
	return 0;
}
