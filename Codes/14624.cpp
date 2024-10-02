#include <iostream>
using namespace std;

int N;

int printSymbol()
{
	for (int i = 0; i < N; i++) cout << '*'; // 맨 윗줄 별
	cout << '\n';

	for (int i = 0; i < N / 2 + 1; i++) { // ㅅ자 별 찍기
		for (int j = 0; j < N / 2 - i; j++) cout << ' '; // 공백 채우기
		cout << '*'; // 첫 별
		if (i == 0) { // 꼭짓점은 별 하나만
			cout << '\n';
			continue;
		}
		for (int j = N / 2 - i + 1; j < N / 2 + i; j++) cout << ' '; // 공백 채우기
		cout << "*\n"; // 둘째 별 찍고 다음 줄
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