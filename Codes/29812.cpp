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

	// HYU 카운팅 & 소문자 파싱
	for (auto &chr : S) {
		if (chr >= 'a' && chr <= 'z') {
			temp += chr;
			continue;
		}
		else if (chr == 'H') cnt[hCnt]++;
		else if (chr == 'Y') cnt[yCnt]++;
		else if (chr == 'U') cnt[uCnt]++;
		if (!temp.empty()) {
			v.push_back(temp);
			temp = "";
		}
	}
	if (!temp.empty()) v.push_back(temp);

	// 에너지 계산
	for (auto &lowAlps : v) {
		int dragE = drag + del;
		int delE = lowAlps.length() * del;
		energy += dragE < delE ? dragE : delE;
	}

	if (energy == 0) cout << "Nalmeok\n";
	else cout << energy << '\n';

	// HYU 계산
	minHYU = min(min(cnt[hCnt], cnt[yCnt]), cnt[uCnt]);
	if (minHYU == 0) cout << "I love HanYang University\n";
	else cout << minHYU << '\n';

	return 0;
}