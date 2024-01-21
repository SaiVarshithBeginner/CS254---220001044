#include <bits/stdc++.h>
using namespace std;


vector<int> mergeintersection(vector<int> &a, vector<int> &b){
    int n = a.size(), m = b.size();
    vector<int> c;
    int i=0, j=0;
    while(i < n && j < m){
        if(a[i] < b[j])
            i++;
        else if(a[i] > b[j])
            j++;
        else{
            if(!c.size() || c.back() != a[i])
                c.push_back(a[i]);
            i++; j++;
        }
    }
    return c;
}


int main(){
    freopen("test_cases_Q1.txt","r",stdin);
    freopen("output_Q1.txt","w",stdout);
      int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
          vector<int> a(n), b(m);
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int j=0; j<m; j++)
            cin >> b[j];
    vector<int>c=mergeintersection(a,b);
    
    
    for(auto x:c)
    cout<<x<<" ";

    }
    return 0;

}