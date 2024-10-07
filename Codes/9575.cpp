#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

int T, vSize, temp;
vector<int> v[3];
set<int> s;
string tempStr;
bool isFiveEight;

void arrayInput()
{
	for (int i = 0; i < 3; i++) {
		cin >> vSize;
		for (int j = 0; j < vSize; j++) {
			cin >> temp;
			v[i].push_back(temp);
		}
	}
	return;
}

void countFiveEight()
{
	for (int i = 0; i < v[0].size(); i++) {
		for (int j = 0; j < v[1].size(); j++) {
			for (int k = 0; k < v[2].size(); k++) {
				temp = v[0][i] + v[1][j] + v[2][k];
				tempStr = to_string(temp);
				isFiveEight = true;
				for (auto& chr : tempStr) {
					if (chr != '5' && chr != '8') {
						isFiveEight = false;
						break;
					}
				}
				if (isFiveEight) {
					s.insert(temp);
				}
			}
		}
	}
	return;
}

void testCase()
{
	v[0].clear(); v[1].clear(); v[2].clear();
	s.clear();
	arrayInput();
	countFiveEight();
	cout << s.size() << '\n';
	return;
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	cin >> T;
	for (int i = 0; i < T; i++) testCase();
	return 0;
}