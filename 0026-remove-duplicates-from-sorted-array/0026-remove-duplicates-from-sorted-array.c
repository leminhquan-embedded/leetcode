int removeDuplicates(int* nums, int numsSize) {
    int *read = nums + 1;
    int *write = nums;
    while (read < nums + numsSize){
        if(*read == *write){
            read++;
        }else{ *++write = *read++;
        write;
    }
    }
    return write - nums + 1;
}