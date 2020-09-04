#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target){
  int newNums[numsSize+1];
  int insert = 0;
  int index = 0;

  for (int i=0; i<numsSize; i++) {
    if (target <= nums[i] && insert == 0) {
      insert = 1;
      newNums[i] = target;
      index = i;
    }

    if (insert == 0) {
      newNums[i] = nums[i];
    } else if (insert == 1) {
      int tmp = nums[i];
      int k = i+1;
      newNums[k] = tmp;
    }

  };

  if (insert == 0) {
    newNums[numsSize] = target;
    index = numsSize;
  };

  return index;
}

int main () {
  int nums[] = {0, 3, 5, 7, 8};
  int index = searchInsert(nums, 5, 2);
  printf("%d\n", index);
}