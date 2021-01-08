#include <iostream>
#include <vector>
#include <algorithm>

#define ull unsigned long long

using namespace std;

vector<int> dist;
vector<int> gas_cost;

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int size;

    cin >> size;
    dist = vector<int>(size - 1);
    gas_cost = vector<int>(size);
    for (int i = 0; i < size - 1; i++)
    {
        cin >> dist[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> gas_cost[i];
    }
	cout << "Input is complete" << endl;
    int min_cost = gas_cost[0];
    ull result = 0;
    for (int i = 0; i < size - 1; i++)
    {
        min_cost = min(gas_cost[i], min_cost);
        result += (ull)min_cost * dist[i];
    }
    cout << result << '\n';

    return 0;
}
