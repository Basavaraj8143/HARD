#include<bits/stdc++.h>
using namespace  std;
long long maxsum(vector<int>&nums,int k){
    int left=0;

    int maxsum=0;
    int sum=0;
    unordered_map <int ,int> mp;
    for(int right=0;right<nums.size();right++){
        mp[nums[right]]++;
        sum+=nums[right];
        while(mp.size()>k){
            mp[nums[left]]--;
            sum-=nums[left];
            if(mp[nums[left]]==0){
                mp.erase(nums[left]);
            }
            left++;
        }
        maxsum=max(sum,maxsum);

    }
    return maxsum;

}
int main( ){
    vector<int> nums={1, 2, 3, 4, 5, 1, 4, 3};
    int k=2;
    cout << maxsum(nums,k) <<endl ;


}

