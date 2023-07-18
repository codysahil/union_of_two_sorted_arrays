vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i = 0; i<n; i++){
            mp[arr1[i]]++;
        }
        for(int i = 0; i<m; i++){
            mp[arr2[i]]++;
        }
        for(auto i: mp){
            ans.push_back(i.first);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
