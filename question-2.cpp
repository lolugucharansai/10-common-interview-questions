#include <iostream>
#include <vector>
using namespace std;

int search_idx(vector<int> nums, int turn, int target) {
    int l = 0;
    int r = nums.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (turn == 0) {
            if (nums[mid] == target && (mid == 0 || nums[mid - 1] < target)) {
                return mid;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        } else {
            if (nums[mid] == target && (mid == nums.size() - 1 || nums[mid + 1] > target)) {
                return mid;
            } else if (nums[mid] <= target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int target ;
    cin>>target;
    int first = search_idx(nums, 0, target);
    int last = search_idx(nums, 1, target);
    cout << "First position: " << first << endl;
    cout << "Last position: " << last << endl;
    return 0;
}