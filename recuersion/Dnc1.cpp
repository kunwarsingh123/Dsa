#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create arrays for left and right
    int* left = new int[len1];
    int* right = new int[len2];

    // Copy values to left and right arrays
    int k = s;
    for (int i = 0; i < len1; i++) {
        left[i] = v[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        right[i] = v[k];
        k++;
    }

    // Merge logic
    int leftindex = 0;
    int rightindex = 0;
    int mainindex = s;

    while (leftindex < len1 && rightindex < len2) {
        if (left[leftindex] < right[rightindex]) {
            v[mainindex++] = left[leftindex++];
        } else {
            v[mainindex++] = right[rightindex++];
        }
    }

    // Copy remaining elements from left and right arrays
    while (leftindex < len1) {
        v[mainindex++] = left[leftindex++];
    }
    while (rightindex < len2) {
        v[mainindex++] = right[rightindex++];
    }

    // Free memory
    delete[] left;
    delete[] right;
}

void mergesort(vector<int>& v, int i, int j) {
    // Base case
    if (i >= j) return;

    int mid = (i + j) / 2;

    // Recursively divide the array into two parts
    mergesort(v, i, mid);      // Left part
    mergesort(v, mid + 1, j);  // Right part

    // Merge the sorted parts
    merge(v, i, j);
}

int main() {
    vector<int> v{12, 5, 1, 33, 11, 20, 811, 122,111,111,111};
    int k = 0;
    int j = v.size() - 1;  // Correct end index

    mergesort(v, k, j);

    // Print the sorted array
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}
