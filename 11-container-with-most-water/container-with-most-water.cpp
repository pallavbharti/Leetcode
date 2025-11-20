class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int i = 0;
        int j = height.size()-1;
        while(i<j){
                int wid = j-i;
                int hig = min(height[i],height[j]);
                int curarea = wid*hig;

                if(curarea > maxwater) maxwater = curarea;
                // if i<j then i++ else j-- ;
                height[i]<height[j] ? i++ : j--;
            }
        
        return maxwater;
    }
};