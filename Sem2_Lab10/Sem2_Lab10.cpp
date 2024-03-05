#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void removeDuplicates(vector<string>& arr) {
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
}

void removeLastK(vector<string>& arr, int k) {
    if (k >= arr.size()) {
        arr.clear();
    }
    else {
        arr.erase(arr.end() - k, arr.end());
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    
    vector<string> strings = { "apple", "banana", "apple", "orange", "banana", "grape" };

    cout << "Изначальный массив: " << endl;
    for (const auto& str : strings) {
        cout << str << " ";
    }
    cout << endl;

    removeDuplicates(strings);

    cout << "\nМассив после удаления повторов: " << endl;
    for (const auto& str : strings) {
        cout << str << " ";
    }
    cout << endl;

    int k = 2;
    removeLastK(strings, k);

    cout << "\nМассив после удаления последних " << k << " элементов: " << endl;
    for (const auto& str : strings) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}