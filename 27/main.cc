#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
  int len = 0;
  int i = 0;

  for(i = 0; i < numsSize; i++) {
    if (val == nums[i]) {
      int index = numsSize - 1 - len;
      int tmp = nums[i];
      nums[i] = nums[index];
      nums[index] = tmp;
      i = i - 1;
      len++;
    }

    if (i + len == numsSize-1) {
      break;
    }
  }

  return numsSize - len;
}

int main () {
  int nums[5] = { 2, 3, 4, 4, 4};
  int len = removeElement(nums, 5, 4);
  printf("len: %d\n", len);
}
