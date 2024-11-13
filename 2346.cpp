#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    deque<pair<int, int>> deq;
    int tmp;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        deq.push_back(make_pair(tmp, i + 1));
    }

    pair<int, int> front;
    for (int i = 0; i < N; i++)
    {
        front = deq.front();
        deq.pop_front();
        if (front.first > 0)
        {
            for (int j = 0; j < front.first - 1; j++)
            {
                deq.push_back(deq.front());
                deq.pop_front();
            }
        }
        else
        {
            for (int j = 0; j > front.first; j--)
            {
                deq.push_front(deq.back());
                deq.pop_back();
            }
        }
        cout << front.second << ' ';
    }

    return 0;
}