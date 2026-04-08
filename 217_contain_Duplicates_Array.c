/*Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true*/
int cmp(const void*nums,const void*b){
    return (*(int*)nums - *(int*)b);
}
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;
}
