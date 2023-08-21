class Solution {
public:
//TC: O(log(n))
    double myPow(double x, int n) {
        double ans=1.0;
        long long temp =n;
     if(n<0){
        temp = -1*n;
     }
     while(temp>0){

         if(temp%2 !=0 ){
             ans = ans*x;
             temp --;
         }else{
             x = x*x;
             temp =temp/2;
         }
     }

     if(n<0){
         ans = (double)(1.0)/ans;
     }
         return ans;
    }
};
