class Solution {
    public:
        vector<int> decode(vector<int>& encoded) {
            int x=0;
            int n=encoded.size();
            for(int i=1;i<=n+1;i++){
                x ^= i;
            }
            cout<<x<<endl;
            vector<int> perm(n+1);
            perm[0] = x;
            for(int i=1;i<n;i+=2){
                perm[0] ^= encoded[i];
            }
            for(int i=1;i<=n;i++){
                perm[i] = perm[i-1]^encoded[i-1];
            }
            return perm;
        }
    };