#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end());

    int secondSmallest = -1, secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            secondSmallest = arr[i];
            break;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != arr[n - 1]) {
            secondLargest = arr[i];
            break;
        }
    }

    if (secondSmallest != -1)
        cout << "Second smallest: " << secondSmallest << endl;
    else
        cout << "No second smallest element." << endl;

    if (secondLargest != -1)
        cout << "Second largest: " << secondLargest << endl;
    else
        cout << "No second largest element." << endl;

    return 0;
}
