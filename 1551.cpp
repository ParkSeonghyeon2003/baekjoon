#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse(string str, int N) {
    vector<int> v;
    string cur = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ',') {
            // str�� int�� �ٲ� v�� push_back;
            v.push_back(stoi(cur));
            cur = "";
            continue;
        }
        cur += str[i];
        if (str.length() - 1 == i) v.push_back(stoi(cur));
    }
    return v;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, K; // N <= 20; 0 <= K <= N-1
    vector<int> seqParsed;
    string seqString;

    cin >> N >> K >> seqString;
    seqParsed = parse(seqString, N); // �Ľ�

    // K�� ����
    for (int i = 0; i < K; i++) {
        vector<int> nextSeq(N - i - 1);
        for (int j = 0; j < N - i - 1; j++) {
            nextSeq[j] = seqParsed[j + 1] - seqParsed[j];
        }
        seqParsed = nextSeq;
    }

    // ���
    for (int i = 0; i < seqParsed.size(); i++) {
        cout << seqParsed[i];
        if (i < seqParsed.size() - 1) cout << ',';
    }
    cout << '\n';

    return 0;
}