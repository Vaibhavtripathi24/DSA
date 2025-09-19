class Solution {
public:
bool power(double n){
    if(n==1) return true;
    if(n<=0) return false;
   bool ans= power(n/2);
   return ans;

}
    bool isPowerOfTwo(int n) {
        double N=n;
       bool a= power(N);

       return a;

        
    }
};