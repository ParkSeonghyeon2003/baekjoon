#include <iostream>

using namespace std;

int T, op1Idx, op2Idx, a, b, c, sum, maxLen;
string oprand1, oprand2, result;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		// ÃÊ±âÈ­
		result = "";
		c = 0;

		cin >> oprand1 >> oprand2;
		maxLen = oprand1.length() > oprand2.length() ? oprand1.length() : oprand2.length();
		for (int i = 0; i < maxLen; i++)
		{
			op1Idx = oprand1.length() - 1 - i;
			op2Idx = oprand2.length() - 1 - i;

			if (op1Idx < 0) a = 0;
			else a = oprand1[op1Idx] - '0';

			if (op2Idx < 0) b = 0;
			else b = oprand2[op2Idx] - '0';

			sum = a + b + c;
			if (sum == 3) result = '1' + result;
			else if (sum == 2)
			{
				result = '0' + result;
				c = 1;
			}
			else if (sum == 1)
			{
				result = '1' + result;
				c = 0;
			}
			else result = '0' + result;
		}
		if (c == 1) result = '1' + result;
		else
		{
			int i = 0;
			for (auto& chr : result) {
				if (chr == '1') break;
				i++;
			}
			if (i == result.length()) i--;
			result = result.substr(i);
		}
		cout << result << '\n';
	}

	return 0;
}