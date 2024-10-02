#include <iostream>
using namespace std;

int N;

int printSymbol()
{
	for (int i = 0; i < N; i++) cout << '*'; // �� ���� ��
	cout << '\n';

	for (int i = 0; i < N / 2 + 1; i++) { // ���� �� ���
		for (int j = 0; j < N / 2 - i; j++) cout << ' '; // ���� ä���
		cout << '*'; // ù ��
		if (i == 0) { // �������� �� �ϳ���
			cout << '\n';
			continue;
		}
		for (int j = N / 2 - i + 1; j < N / 2 + i; j++) cout << ' '; // ���� ä���
		cout << "*\n"; // ��° �� ��� ���� ��
	}
	return 0;
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	cin >> N;
	if (N % 2 != 0) return printSymbol();
	cout << "I LOVE CBNU\n";
	return 0;
}