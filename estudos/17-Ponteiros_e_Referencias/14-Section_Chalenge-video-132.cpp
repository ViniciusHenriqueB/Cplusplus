#include <iostream>
using namespace std;

void print(const int* const arr, const size_t arr_size);
int* apply_all(const int* const arr1, const size_t arr1_size, const int* const arr2, const size_t arr2_size);

int main() {
    const size_t arr1_size {5};
    const size_t arr2_size {3};
const 
    int arr1[] = {1, 2, 3, 4, 5};     
    int arr2[] = {10, 20, 30};    

    cout << endl;

    cout << "Array 1: ";
    print(arr1, arr1_size);

    cout << "Array 2: ";
    print(arr2, arr2_size);

    int *results = apply_all(arr1, arr1_size, arr2, arr2_size);
    size_t results_size {arr1_size * arr2_size};

    cout << "Result: ";
    print(results, results_size);

    delete [] results;

    cout << endl;

    return 0;
}

void print (const int* const arr, const size_t arr_size) {
    cout << '[';
    for (size_t i = 0; i < arr_size; i++) {
        cout << arr[i];
        if (i != arr_size - 1)
            cout << ", ";
    }
    cout << ']' << endl;
}

int* apply_all(const int* const arr1, const size_t arr1_size, const int* const arr2, const size_t arr2_size) {
    int* results {nullptr};
    size_t results_size {arr1_size * arr2_size};
    results = new int[results_size];

    int aux {0};

    for (size_t i = 0; i < arr2_size; i++) {
        for (size_t j = 0; j < arr1_size; j++) {
            results[aux] = arr2[i] * arr1[j];     // Mesmo de fazer: *(results + aux) = *(arr2 + i) * *(arr1 + j);
            aux++;
        }
    }

    return results;
}