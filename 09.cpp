/*Imagine you work for a financial analysis firm, where you help clients manage their investments by balancing their portfolios. 
One of your clients wants to ensure their portfolio balances out to a "neutral" net exposure, meaning the sum of three selected 
investment positions should total zero. The positions could represent various assets, where each position's value is a gain or loss.
To help the client, you want to identify all possible combinations of three investment positions that, when added together, 
balance out to zero—meaning no net gain or loss.

For example:
Suppose the portfolio positions are represented by [-1, 0, 1, 2, -1, -4]. Here, there are two unique sets of three positions that balance out to zero:
[-1, -1, 2] and [-1, 0, 1]
These combinations suggest that by holding these positions together, the client’s net gain or loss is zero.
In a different portfolio with positions [0, 0, 0], there's only one valid triplet [0, 0, 0] that totals zero, representing a neutral position with no net impact.
If the portfolio contains positions like [0, 1, 1], there’s no way to balance out to zero with any combination 
of three positions, indicating the client may need to adjust their portfolio for neutrality.
By efficiently identifying these "neutralizing triplets" without allowing duplicate sets, you help your client 
explore the options they have to stabilize or adjust their portfolio according to their financial goals. 
This approach is particularly useful in portfolio management, where quick, balanced adjustments are needed in response to market changes.*/


#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int k_runnerup(vector<int> time, int k)
{
    priority_queue<int> q;
    for (auto t : time)
    {
        q.push(t);
        if (q.size() > k)
            q.pop();
    }
    return q.top();
}

int main()
{
    vector<int> arr;
    int n, a;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << "Enter k: ";
    cin >> a;
    cout << "The " << a << "th runner up took " << k_runnerup(arr, a) << " minutes." << endl;
}