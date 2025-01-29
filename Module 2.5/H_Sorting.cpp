#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    bool swapped;
    do {
        swapped = false;
        // Loop to compare adjacent elements
        for (int i = 0; i < n - 1; i++) 
        {
            if (a[i] > a[i + 1]){
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

   bubbleSort(a, n);

   for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
   }

  cout << endl;

  return 0;
}
