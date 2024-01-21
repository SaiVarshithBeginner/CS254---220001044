#include <bits/stdc++.h>
using namespace std;

        // Time complexity is O(n)
int main(){
    freopen("test_cases.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int mn1 = INT_MAX, mn2 = INT_MAX;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        for(int i=0; i<n; i++){
            if(v[i] <= mn1){
                mn2 = mn1;
                mn1 = v[i];
            }else if(v[i] < mn2)
                mn2 = v[i];
        }
        cout << "First minimum: " << mn1 << " and second minima: " << mn2 << endl;
    }
}