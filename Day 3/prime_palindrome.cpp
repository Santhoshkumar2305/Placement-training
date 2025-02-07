class Solution {
    public:
        int primePalindrome(int n) {
            while(true){
                if(n==reverse(n) && isPrime(n)){
                    return n;
                }
                n++;
                if(n>10000000 && n<100000000){
                    n=100000000;
                }
            }
        }
    
        int reverse(int n){
            int rev=0;
            while(n!=0){
                rev = rev*10 + n%10;
                n/=10;
            }
            return rev;
        }
    
        bool isPrime(int n){
            if(n==1)
                return false;
            else if(n==2)
                return true;
            else{
                for(int i=2;i*i<=n;i++){
                    if(n%i==0)
                        return false;
                }
            }
            return true;
        }
    };