/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

   int* result=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                result[0]=i;
                result[1]=j;
                 *returnSize = 2;// op is gicen 2 array so  , if more digits using k with count
                return result;
            }
        }
    }
     *returnSize = 0;
     return NULL;
     /*int* result=(int*)malloc(2*sizeof(int));
     int* hash=(int*)malloc(2*sizeof(int));
     for(int i=0;i<numsSize;i++){
        int required=0;
        //if(nums[i]>=0){
            required=target-nums[i];
       // }
       if(hash[required] != -1){
    int stored_index = hash[required];
    
    result[0] = stored_index;
    result[1] = i;
    
    *returnSize = 2;
    return result;
}

     }*/
}
/*If function returns:

int*

👉 AND you are creating array inside function
➡️ You must use malloc
and in leetcode If problem says:

"returned array must be malloced"*/
