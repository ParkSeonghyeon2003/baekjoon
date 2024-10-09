#include <iostream>
using namespace std;

int N, cnt, T;
int arr[3];
bool lstOneFlag, progFlag;

int main(void)
{
	// N�� ����
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (auto& it : arr) cin >> it; // ���� �ð� �Է�
		lstOneFlag = false; progFlag = true; // �÷��� �ʱ�ȭ

		// ������ �ذ� �ð����� üũ�Ѵ�.
		for (int i = 2; i >= 0; i--) {
			if (arr[i] == -1) continue; // �ð��� -1�� �ƴ� �� ���� �����ؾ� ��.

			if (!lstOneFlag) lstOneFlag = true; // ���� 1. �ϳ��� Ǭ ������ ���� ��.
			
			// ������ Ǯ���� & ������� Ǯ���� üũ �� �÷��� �ݿ�
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
