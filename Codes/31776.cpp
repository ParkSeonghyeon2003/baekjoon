#include <iostream>
using namespace std;

int N, cnt, T;
int arr[3];
bool lstOneFlag, progFlag;

int main(void)
{
	// N번 루프
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (auto& it : arr) cin >> it; // 문제 시간 입력
		lstOneFlag = false; progFlag = true; // 플래그 초기화

		// 마지막 해결 시간부터 체크한다.
		for (int i = 2; i >= 0; i--) {
			if (arr[i] == -1) continue; // 시간이 -1이 아닐 때 로직 실행해야 함.

			if (!lstOneFlag) lstOneFlag = true; // 조건 1. 하나라도 푼 문제가 있을 것.
			
			// 꾸준히 풀었나 & 순서대로 풀었나 체크 후 플래그 반영
			T = arr[i];
			for (int j = i - 1; j >= 0; j--) {
				if (arr[j] == -1 || arr[j] > T) {
					progFlag = false;
					break;
				}
				T = arr[j];
			}
		}
		if (lstOneFlag && progFlag) cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
