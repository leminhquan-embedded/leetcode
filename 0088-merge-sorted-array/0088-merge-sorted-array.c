void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int *i = nums1 + m -1;
    int *j = nums2 + n -1;
    int *k = nums1 + m + n -1;
    
    while (j >= nums2){
        if (i >= nums1 && *i > *j){
            *k = *i;
            k--;
            i--;
        } else {
            *k = *j;
            j--;
            k--;
        }
        
    }
}