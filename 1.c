#include <stdio.h>


int searchInsert1(int* nums, int numsSize, int target){
    int i;
    for(i=0;i<=numsSize;i++)
    {
        if(target<=nums[i])
        {
            return i;
        }
    }
}    
int searchInsert2(int* nums, int numsSize, int target){
    int low,high,mid;
    low = 0;
    high = numsSize - 1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(nums[mid]>target)
            high= mid-1;
        else if(nums[mid]<target)
            low= mid+1;
        else
            return mid;
    }
    return low;
}    

int main()
{

    int nums[] = {1,3,4,5,6};
    int numSize = 5;
    int target = 1;
    int k;
    k = searchInsert(nums,numSize,target);
    printf("%d ",k);
}