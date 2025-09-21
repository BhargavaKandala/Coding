
void merge(int A[],int l ,int m, int h){
    int arr[h-l+1];
    int i = l;
    int j = m + 1;
    int k = 0;

    while(i <= m && j <= h){
        if(A[i] < A[j]){
        arr[k++] = A[i++];
        }
        else arr[k++] = A[j++];
    }
    
    while(i <= m){
        arr[k++] = A[i++];
    }
    while(j <= h){
        arr[k++] = A[j++];
    }
    k=0;
    for(int i = l; i<= h; i++){
        A[i] = arr[k];
        k++;
    }
    
}

void mergesort(int arr[], int l, int h){
    if(l < h){
        int m = l + (h - l)/2;
        mergesort(arr , l, m);
        mergesort(arr , m + 1, h);
        merge(arr , l, m , h);
    }
}


int maximumProduct(int* nums, int numsSize) {
    mergesort(nums , 0 , numsSize -1);
    int max = nums[numsSize-1] * nums[numsSize -2] * nums[numsSize - 3];
    int pro = 1;
    
    if(nums[0] * nums[1] * nums[numsSize -1] > max){
        max = nums[0] * nums[1] * nums[numsSize -1];
    }
    return max;


}
