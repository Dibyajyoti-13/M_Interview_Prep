#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    for (size_t i = 0; i < nums.size(); ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    vector<int> portfolio;
    int n, a;
    cout<<"Enter portfolio size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a;
        portfolio.push_back(a);
    }
    vector<vector<int>> triplets = threeSum(portfolio);
    cout << "Unique triplets that sum to zero:\n";
    for (auto& triplet : triplets) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
    }
    return 0;
}
