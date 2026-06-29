class Solution {
    public int subarraySum(int[] nums, int k) {
        int[] pre=new int[nums.length];
        int sum=0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            pre[i]=sum;
        }int count=0;
        Map<Integer, Integer> hash=new HashMap<>();
        for(int j=0;j<nums.length;j++){
            if(hash.containsKey(pre[j]-k)){
                int x=hash.get(pre[j]-k);
                count+=x;
            }
            if(hash.containsKey(pre[j])){
                if(pre[j]==k) count++;
                hash.put(pre[j], hash.get(pre[j])+1);
            }
            else{
                hash.put(pre[j], 1);
                if(pre[j]==k) count++;
            }
        }return count;
    }
}