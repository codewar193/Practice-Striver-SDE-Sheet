#include <bits/stdc++.h> 


int merge(long long arr[], int low, int mid, int high) {
    vector<long long> temp(high - low + 1);
    int left = low;
    int right = mid + 1;
    int cnt = 0;

    for (int i = low; i <= high; i++) {
        temp[i - low] = arr[i];
    }

    int k = low;

    while (left <= mid && right <= high) {
        if (temp[left - low] <= temp[right - low]) {
            arr[k++] = temp[left - low];
            left++;
        }
        else {
            arr[k++] = temp[right - low];
            cnt += (mid - left + 1);
            right++;
        }
    }

    while (left <= mid) {
        arr[k++] = temp[left - low];
        left++;
    }

    while (right <= high) {
        arr[k++] = temp[right - low];
        right++;
    }

    return cnt;
}

int mergeSort(long long arr[], int low, int high) {
    int cnt = 0;
    if (low < high) {
        int mid = low + (high - low) / 2;
        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);
        cnt += merge(arr, low, mid, high);
    }
    return cnt;
}

long long getInversions(long long arr[], int n) {
    return mergeSort(arr, 0, n - 1);
}
