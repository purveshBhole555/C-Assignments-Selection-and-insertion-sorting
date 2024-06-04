#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    vector<int> digits = {6, 8, 4, 5, 2, 3};

   
    selectionSort(digits);

    
    int num1 = 0, num2 = 0;
    bool turn = true; 
    for (int digit : digits) {
        if (turn) {
            num1 = num1 * 10 + digit;
        } else {
            num2 = num2 * 10 + digit;
        }
        turn = !turn;
    }


    int minSum = num1 + num2;

    cout << "Minimum possible sum of two numbers: " << minSum << endl;

    return 0;
}


// output is 

Minimum possible sum of two numbers: 604