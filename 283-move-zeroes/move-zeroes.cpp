class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int noz = 0;
        int n = arr.size();
        vector<int> v;
        for(int i = 0; i<n; i++){
            if(arr[i]!=0) v.push_back(arr[i]);
            else noz++;
        }
        for(int i=1;i<=noz;i++){
            v.push_back(0);
        }
        for(int i=0; i<n;i++){
            arr[i] = v[i];

        }
        

        
    }
};