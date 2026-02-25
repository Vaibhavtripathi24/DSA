class Solution {
public:
int countBits(int n) {
        int cnt = 0;
        while (n > 0) {
            cnt += (n & 1);
            n >>= 1;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
    vector<pair<int,int>> v;
        for (int x : arr) {
            v.push_back({countBits(x), x});
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = v[i].second;
        }
        return arr;
    }
};