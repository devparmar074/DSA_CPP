class Solution {
    
    void subset(vector<int>& nums, vector<int> output, int index, vector<vector<int>>& ans)
                {
                    if(index>=nums.size())
                    {
                        ans.push_back(output);
                        return ;
                    }
        
                 //exclude
                    subset(nums,output,index+1, ans);
        
                //include
                int element = nums[index];
                output.push_back(element);
                subset(nums,output,index+1, ans);
                    
                }
    
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> output;
       vector<vector<int>> ans;
        
        int index=0;
        subset(nums,output,index,ans);
        return ans;
        
    }
};