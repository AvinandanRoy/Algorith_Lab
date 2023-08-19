/*
    link : https://leetcode.com/problems/two-sum/
    leetCode : 1. Two Sum
*/

#include<stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2 ;

    int *returnArr = (int*)malloc(2*(sizeof(int)));
    for(int i = 0 ; i < numsSize ; i++){
        for(int j = i+1 ; j < numsSize ; j++){
            if(nums[i] + nums[j] == target){
                returnArr[0] = i ;
                returnArr[1] = j ;
            }
        }
    }

    return returnArr;
}
