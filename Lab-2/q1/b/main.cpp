#include <bits/stdc++.h>
using namespace std;

vector<int> mergeUnion(vector<int> &a, vector<int> &b){
    int n = a.size(), m = b.size();
    vector<int> c;
    int i=0, j=0;
    while(i < n && j < m){
        if(c.size() > 0 && c.back() == a[i])
            i++; 
        else if(c.size() > 0 && c.back() == b[j])
            j++;
        else if(a[i] <= b[j])
            c.push_back(a[i++]);
        else if(a[i] > b[j])
            c.push_back(b[j++]);
    }
    while(i<n){
        if(c.back() != a[i])
            c.push_back(a[i]);
        i++;
    }while(j<m){
        if(c.back() != b[j])
            c.push_back(b[j]);
        j++;
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
    vector<int>c=mergeUnion(a,b);
    
    
    for(auto x:c)
    cout<<x<<" ";

    return 0;
    }
}