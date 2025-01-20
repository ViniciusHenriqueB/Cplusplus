#include <iostream>
using namespace std;

int* create_array(size_t size, int init_value);

void display(const int* const array, size_t size);

int main() {
    int* my_array = nullptr;
    size_t size;
    int init_value;

    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "\nWhat value would you like them initialized to? ";
    cin >> init_value;

    my_array = create_array(size, init_value);

    cout << "\n--------------------------------------------------------------------------------\n\n";
    display(my_array, size);

    delete [] my_array;
    return 0;
}

int* create_array(size_t size, int init_value) {
    int* my_array = new int[size];
    for (size_t i = 0; i < size; i++) {
        my_array[i] = init_value;
    }
    return my_array;
}

void display(const int* const array, size_t size) {
    cout << "Your array: ";
    for (size_t i = 0; i < size; i++) {
        cout << array[i];
        if (i != size - 1) 
            cout << ' ';
    }
    cout << "\n\n";
}


