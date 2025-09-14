long long maximumValueSum(int* v, int vSize, int k, int** edges, int edgesSize, int* edgesColSize) {
    long long total = 0;
    long long total_diff = 0;
    long long diff;
    int positive_count = 0;
    long long min_abs_diff = INT_MAX;

    // Calculate the total sum of all elements in the array
    for (int i = 0; i < vSize; i++) {
        total += v[i];
        diff = (v[i] ^ k) - v[i];

        if (diff > 0) {
            total_diff += diff;
            positive_count++;
        }
        min_abs_diff = (labs(diff) < min_abs_diff) ? labs(diff) : min_abs_diff;
    }

    if (positive_count % 2 == 1) {
        total_diff = total_diff - min_abs_diff;
    }

    return total + total_diff;
}