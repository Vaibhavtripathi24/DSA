class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k = minutes;
        vector<int>& arr = customers;
        int n = arr.size();

        int prevLoss = 0;
        for (int i = 0; i < k; i++) {
            if (grumpy[i] == 1) prevLoss += arr[i];
        }

        int maxLoss = prevLoss;
        int maxIdx = 0;

        int i = 1;
        int j = k;
        while (j < n) {
            int currLoss = prevLoss;
            if (grumpy[j] == 1) currLoss += arr[j];
            if (grumpy[i - 1] == 1) currLoss -= arr[i - 1];

            if (maxLoss < currLoss) {
                maxLoss = currLoss;
                maxIdx = i;
            }

            prevLoss = currLoss;
            i++;
            j++;
        }

        for (int x = maxIdx; x < maxIdx + k && x < n; x++) {
            grumpy[x] = 0;
        }

        int sum = 0;
        for (int x = 0; x < n; x++) {
            if (grumpy[x] == 0) sum += arr[x];
        }

        return sum;
    }
};
