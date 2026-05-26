class Solution {
public:
    bool isUgly(int n) {

      if(n<=0) return false;

      int factors[3]={2,3,5};
    for(int i=0;i<3;i++) {
      while(n%factors[i]==0)
      {
        n/=factors[i];
      }
    }
 // after division n becomes 1 so return n==1 instead of true
      return n==1;
    }
};