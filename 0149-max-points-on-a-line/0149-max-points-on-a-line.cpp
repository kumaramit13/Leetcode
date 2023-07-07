class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        int n = p.size(), mx,my,x2,y2 ,ans = 0;
        for(int i = 0;i<n;i++){
            unordered_map<double,int> mp;
            for(int j = 0;j<n;j++){
                if(i==j) continue;
                ans = max(ans,++mp[(p[j][1]-p[i][1])*1.0/(p[j][0]-p[i][0])]);
            }
        }
        // cout<<((4*1.00)/0);  outputs inf. 
        return ans+1;
    }
};