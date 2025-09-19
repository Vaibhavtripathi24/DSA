class Solution {
public:
 bool power(double n){
    if(n<=0) return false;
    if(n==1) return true;
   return power (n/3);


}
    bool isPowerOfThree(int n) {
        double N=n;
       bool a= power(n);
        return a;
    }
};