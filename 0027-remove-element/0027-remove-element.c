int removeElement(int* nums, int numsSize, int val) {
    int *read = nums;
    int *write = nums;
    while ( read  < nums + numsSize){
        if (*read != val){
            *write++ = *read++; 
        } else {
            read++;
        }
    }
    return write - nums;
}