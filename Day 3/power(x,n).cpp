class Solution {
    public:
        double myPow(double x, long long n) {
            double res=1;
            int flag=0;
            if(n<0)
            {
                flag=1;
                n *= -1;
            }
            while(n>0){
                if(n&1){
                    res*=x;
                }
                x*=x;
                n/=2;
            }
            if(flag)
                return 1/res;
            return res;
            
        }
    };