void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


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
    int m = l + (h - l)/2;
    if(l < h){
        
        mergesort(arr , l, m);
        mergesort(arr , m + 1, h);
        merge(arr , l, m , h);
    }
}




int maximumGap(int* nums, int numsSize) {
    mergesort(nums , 0, numsSize - 1);
    int max = 0;
    for(int i =0; i < numsSize - 1; i++){
        if(nums[i + 1] - nums[i] > max){
            max = nums[i + 1] - nums[i];
        }
    }
    return max;
}

