#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    vector<string> arr = {"apple", "banana", "orange", "grape", "kiwi"};
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
           
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array:" << endl;
    for (const string &str : arr)
    {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}

// Output is 

Sorted array:
apple banana grape kiwi orange