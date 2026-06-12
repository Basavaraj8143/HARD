#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(const vector<int>& arr) {
    int n = arr.size();
    vector<int> nge(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        nge[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }

    return nge;
}

int main() {
    vector<int> arr = {4, 5, 2, 10};

    vector<int> result = nextGreaterElement(arr);

    cout << "Next Greater Elements:\n";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}

/*
#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> next_greater;

        // Build next greater map from nums2
        for (int num : nums2) {
            while (!s.empty() && s.top() < num) {
                next_greater[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }

        // Prepare result for nums1
        vector<int> result;
        for (int num : nums1) {
            if (next_greater.count(num)) {
                result.push_back(next_greater[num]);
            } else {
                result.push_back(-1);
            }
        }

        return result;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> result = sol.nextGreaterElement(nums1, nums2);

    cout << "Output: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
*/
