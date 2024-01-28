#include <bits/stdc++.h>
#include <vector>

using namespace std;

int maxSubArraySum(const vector<long long> &arr, int low, int high) {
    if (low == high) {
        return arr[low];
    }

    int mid = (low + high) / 2;

    
    int lmax = INT_MIN;
    int rmax = INT_MIN;
    int sum = 0;

    for (int i = mid; i >= low; --i) {
        sum += arr[i];
        lmax = max(lmax, sum);
    }

    sum = 0;
    for (int i = mid + 1; i <= high; ++i) {
        sum += arr[i];
        rmax = max(rmax, sum);
    }

   
    int mleft = maxSubArraySum(arr, low, mid);
    int mright = maxSubArraySum(arr, mid + 1, high);

    
    return max({lmax + rmax, mleft, mright});
}

int maxSubArraySum(const vector<long long> &arr) {
    return maxSubArraySum(arr, 0, arr.size() - 1);
}

int main() {
    freopen("Lab-3/q2/input.txt","r",stdin);
    freopen("Lab-3/q2/output.txt","w",stdout);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
    
    int maxSum = maxSubArraySum(arr);
    cout << "Maximum sum of a subsequence of consecutive items: " << maxSum << endl;
    }
    return 0;
}
