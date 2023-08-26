#include <iostream>
#include <vector>
using namespace std;

void merge_arr(int arr[], int low, int mid, int high) {
    vector<int> temp;
    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= high) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy the sorted elements back to the original array
    for (int k = low; k <= high; k++) {
        arr[k] = temp[k - low];
    }
}

void merge_sort(int arr[], int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge_arr(arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter No. of elements: " << endl;
    cin >> n;
    int arr[n];

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1);

    cout << "Sorted elements are: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
