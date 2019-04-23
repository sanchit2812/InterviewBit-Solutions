/*Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
*/
// contains some error due to anti log and logs
#define EPS 1e-9
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int zero=0,idx=-1, n = nums.size();
        //zero appear
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
                idx = i;
            }
        }
        
        if(zero>1){
            for(int i=0;i<n;i++) ans.push_back(0);
            return ans;
        }
        
        if(zero==1){
            int product=1;
            for(int i=0;i<n;i++){
                if(i==idx) continue;
                product*= nums[i];
            }
            
            for(int i=0;i<n;i++){
                if(i!=idx) ans.push_back(0);
                else ans.push_back(product);
            }
            return ans;
        }
        // finsih -zero
        //negatives , sum
        long double sum=0;
        int neg[n+1]={1},count=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg[i] = -1;
                nums[i]*=-1;
                count++;
            }
            sum += (double)log10(nums[i]);
        }
        
        // ans.push_back
        for(int i=0;i<n;i++){
            ans.push_back(int(EPS + pow(10.00, sum - log10(nums[i]))));
            if( (neg[i]==-1 && (count-1)&1)  ||  (neg[i]==1 && count&1) ) ans.back()*=-1;
        }
        return ans;
    }
};

//  correct 
vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        ans[nums.size()-1] = 1;
        
        for(int i= nums.size()-2;i>=0;i--) ans[i] = ans[i+1] *nums[i+1];
        int left = 1;
        for(int i=0;i<nums.size();i++){
            ans[i] = ans[i]*left;
            left*=nums[i];
        }
        return ans;
            
    }
