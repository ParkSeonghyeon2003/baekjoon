#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int loops, query, oprand;
	long long sum = 0, xorVar = 0;
	cin >> loops;
	for (int i = 0; i < loops; i++) {
		cin >> query;
		switch (query)
		{
		case 1: // Plus oprand
			cin >> oprand;
			sum += oprand;
			xorVar ^= oprand;
			break;
		case 2: // Minus oprand
			cin >> oprand;
			sum -= oprand;
			xorVar ^= oprand;
			break;
		case 3: // Print sum
			cout << sum << '\n';
			break;
		case 4: // Print xorVar
			cout << xorVar << '\n';
			break;
		default:
			break;
		}
	}
	return 0;
}