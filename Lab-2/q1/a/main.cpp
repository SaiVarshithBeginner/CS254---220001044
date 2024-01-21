#include <bits/stdc++.h>
using namespace std;

vector<int> Merge(vector<int> &a, vector<int> &b){
    int n = a.size(), m = b.size();
    vector<int> c(n+m);
    int i=0, j=0, k=0;
    while(k < m+n){
        if(j == m || a[i] <= b[j])
            c[k++] = a[i++];
        if(i == n || a[i] > b[j])
            c[k++] = b[j++];
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
    vector<int>c=Merge(a,b);
    
    
    cout << "Merged Array: ";
        for(auto x:c)
            cout << x << " ";
        cout << endl;
   

    }
   
    return 0;
}