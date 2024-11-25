#include <iostream>
#include <unordered_map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    unordered_map<int, int> umap;
    int seqLen, limit, tmp;

    cin >> seqLen >> limit;
    for (int i = 0; i < seqLen; i++)
    {
        cin >> tmp;
        umap[tmp]++;
    }
    
    return 0;
}