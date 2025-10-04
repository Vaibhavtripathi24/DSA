class Solution {
public:
void fillseive(vector<bool>& seive){
    int n = seive.size()-1;
    for(int i = 2; i<=sqrt(n); i++){
        for(int j = i*2 ; j<=n ; j+=i){
            seive[j] = 0;
        }
    }
}
    int countPrimes(int n) {
        if(n<=2) return 0;
        n = n-1;
        int count = 0;
      
        vector<bool> seive(n+1, 1);
        fillseive(seive);
        seive[0]= 0;
        seive[1] = 1;
        for (int i =2; i<=n; i++){
            if(seive[i]==1) count++;

        }
        return count;
        
    }
};