#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	int N, M, U, L, R, D;
	int height, width;
	vector<string> puzzle;

	cin >> N >> M >> U >> L >> R >> D;
	height = U + D + N;
	width = L + R + M;

	cin.ignore(); // clear input buffer.
	// Get NxM puzzles string.
	for (int i = 0; i < N; i++) {
		string temp;
		getline(cin, temp);
		puzzle.push_back(temp);
	}

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i < U || j < L || j >= L + M || i >= U + N) {
				if ((i + j) % 2 == 0) cout << '#';
				else cout << '.';
			}
			else {
				cout << puzzle[i - U][j - L];
			}
		}
		cout << '\n';
	}
	return 0;
}