#include <iostream>
#include <vector>

using namespace std;

void maxRenewal(double& prevProd, double& maxProd) { maxProd = prevProd > maxProd ? prevProd : maxProd; }

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    double prevProd = 0.0, maxProd = 0.0;
    int n = 0;
    
    cin >> n;
    vector<double> dblVec(n);
    for (auto& elem : dblVec) cin >> elem;

    for (int i = 0; i < n; i++)
    {
        prevProd = dblVec[i];
        maxRenewal(prevProd, maxProd);
        for (int j = i + 1; j < n; j++)
        {
            prevProd *= dblVec[j];
            maxRenewal(prevProd, maxProd);
        }
    }

    cout.precision(3);
    cout << fixed << maxProd << '\n';

    return 0;
}