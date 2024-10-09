#include <iostream>
using namespace std;

int main(void)
{
	int bites;
	cin >> bites;
	for (int i = 0; i < bites / 4; i++) {
		cout << "long ";
	}
	cout << "int\n";
	return 0;
}