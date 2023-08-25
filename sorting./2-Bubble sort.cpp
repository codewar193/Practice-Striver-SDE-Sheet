#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n) {
    for (int i = n-1; i >=1; i--) {
         int swapCount = 0;
        for (int j = 0; j < i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapCount++;
            }
        }
        if(swapCount == 0)break;// To check it's already array is sorted or not
        
    }
}

int main() {
    int n;
    cout << "Enter No. of elements: " << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
