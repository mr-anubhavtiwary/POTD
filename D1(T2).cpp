//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> v,v1{-1,-1};
    unordered_map<int,int> m;
    for(int i{};i<n;i++){
        m[a[i]]++;
        if(m[a[i]]==1)
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    if(v.size()==0 || v.size()==1)
    return v1;
    return v;
}