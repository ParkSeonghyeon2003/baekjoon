#include <iostream>
using namespace std;

int T, westSite, eastSite;
long long temp, comb;

long long combination(int n, int r)
{
	temp = 1;
	for (int i = n; i > (r > n - r ? r : n - r); i--) temp *= i;
	comb = temp;
	temp = 1;
	for (int i = (r < n - r ? r : n - r); i > 0; i--) temp *= i;
	comb /= temp;
	return comb;
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> westSite >> eastSite;
		cout << combination(eastSite, westSite) << '\n';
	}
	return 0;
}