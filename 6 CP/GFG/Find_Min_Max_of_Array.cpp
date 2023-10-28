// problem Link :- https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?page=1&difficulty[]=-1&sortBy=submissions

pair<long long, long long> getMinMax(long long a[], int n) {
     long long i = 0;
    long long min = a[i];
    long long max = a[i];
    
    for(int i{0}; i < n; i += 1) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    for(int i{0}; i < n; i += 1) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    pair<long long,long long> result;
    result.first = min;
    result.second = max;
    return result;
}
