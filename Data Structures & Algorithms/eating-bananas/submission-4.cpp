class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.rbegin(),piles.rend());
        if(h==piles.size()){
            return piles[0];
        }
        int r=piles[0];
        int l=1;
        int res=r;
        while(l<=r){
            int k = (l+r)/2;
            int time=0;
            for(auto it : piles){
                // time+=(it+r-1)/r;
                time += ceil(static_cast<double>(it) / k);
            }
            if(time<=h){
                res=k;
                cout<<res;
                r=k-1;
            }else{
                l=k+1;
            }
            
        }
        return res;

    }
};
