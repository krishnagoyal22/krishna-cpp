#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selection_sort(int arr1[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int minn = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr1[j] < arr1[minn]) {
                minn = j;
            }
        }
        int temp2 = arr1[minn];
        arr1[minn] = arr1[i];
        arr1[i] = temp2;
    }
}

void bubble_sort(int arr1[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int temp1 = arr1[j + 1];
                arr1[j + 1] = arr1[j];
                arr1[j] = temp1;
            }
        }
    }
}

void insertion_sort(int arr1[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr1[j - 1] > arr1[j]) {
            int temp3 = arr1[j - 1];
            arr1[j - 1] = arr1[j];
            arr1[j] = temp3;
            j--;
        }
    }
}

void merge(vector<int> &arr1, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr1[left] <= arr1[right]) {
            temp.push_back(arr1[left]);
            left++;
        } else {
            temp.push_back(arr1[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr1[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr1[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr1[i] = temp[i - low];
    }
}

void merge_sort(vector<int> &arr1, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(arr1, low, mid);
        merge_sort(arr1, mid + 1, high);
        merge(arr1, low, mid, high);
    }
}

int partition(vector<int> &arr1, int low, int high) {
    int pivot = arr1[low];
    int i = low;
    int j = high;
    while (i < j) {
        while (arr1[i] <= pivot && i < high) {
            i++;
        }
        while (arr1[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr1[i], arr1[j]);
        }
    }
    swap(arr1[low], arr1[j]);
    return j;
}

void quick_sort(vector<int> &arr1, int low, int high) {
    if (low < high) {
        int Pindex = partition(arr1, low, high);
        quick_sort(arr1, low, Pindex - 1);
        quick_sort(arr1, Pindex + 1, high);
    }
}

int main() {
    cout << "Enter the number of inputs:\n";
    int n;
    cin >> n;
    cout << "Enter the values:\n";
    vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    quick_sort(arr1, 0, n - 1);
    cout << "Sorted array is:\n";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    return 0;
}
