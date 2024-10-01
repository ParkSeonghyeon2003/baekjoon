#include <iostream>
#include <vector>
using namespace std;

enum cntEnum { hCnt, yCnt, uCnt };

int main(void)
{
	int N, drag, del;
	int energy = 0, minHYU;
	string S, temp = "";
	vector<string> v;
	int cnt[3] = { 0 };

	cin >> N >> S >> del >> drag;

	// HYU ī���� & �ҹ��� �Ľ�
	for (int i = 0; i < S.length(); i++) {
		if (S[i] >= 'a' && S[i] <= 'z') {
			temp += S[i];
			continue;
		}
		else if (S[i] == 'H') cnt[hCnt]++;
		else if (S[i] == 'Y') cnt[yCnt]++;
		else if (S[i] == 'U') cnt[uCnt]++;
		if (!temp.empty()) {
			v.push_back(temp);
			temp = "";
		}
	}
	if (!temp.empty()) v.push_back(temp);

	// ������ ���
	for (auto lowAlps : v) {
		int dragE = drag + del;
		int delE = lowAlps.length() * del;
		energy += dragE < delE ? dragE : delE;
	}

	if (energy == 0) cout << "Nalmeok\n";
	else cout << energy << '\n';

	// HYU ���
	minHYU = min(min(cnt[hCnt], cnt[yCnt]), cnt[uCnt]);
	if (minHYU == 0) cout << "I love HanYang University\n";
	else cout << minHYU << '\n';

	return 0;
}