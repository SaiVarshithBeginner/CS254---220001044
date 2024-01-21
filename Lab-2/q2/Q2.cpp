#include <bits/stdc++.h>
using namespace std;

int nxt_gap(int gap){
    if(gap <= 1)
        return 0;
    return ceil(gap/2.0);
}


void sort(vector<int> &a, int m){
    int n = a.size();
    if(m == 0 || m == n)
        return;
    for(int cgap = nxt_gap(n); cgap > 0; cgap = nxt_gap(cgap)){
        for(int i=0; i+cgap < n; i++){
            int j = i+cgap;
            if(a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
}




int main(){
    freopen("test_cases_Q2.txt","r",stdin);
    freopen("output_Q2.txt","w",stdout);
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a, m);
        cout << "Sorted Array: ";
        for(auto x:a)
            cout << x << " ";
        cout << endl;
    }
}