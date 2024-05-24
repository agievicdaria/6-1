// #include "Array.h"
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <cmath>
// using namespace std;

// Array createDynamicArray(int* arr, int size);

// Array createDynamicArray(int* arr, int size)
// {

//     Array result(size);

//     for (int i = 0; i < size; ++i)
//     {
//         result[i] = arr[i];
//     }


//     double sum = 0, s = 0;
//     for (int i = 0; i < size; ++i)
//     {
//         s += arr[i];
//         sum += abs(arr[i]);
//     }
//     double avg = sum / size;
//     result.push_back(s);
//     result.push_back(avg);


//     for (int i = 0; i < size; ++i)
//     {
//         result[i] = arr[i];
//     }

//     for (int i = 0; i < size; ++i)
//     {
//         if (arr[i] % 2 != 0) 
//         { 
//             result[i] /= abs(avg);  
//         }
//     }

//     return result;
// }


// int main() {
//     const int size = 10;
//     int arr[size];


//     srand(static_cast<unsigned>(time(nullptr)));
//     for (int i = 0; i < size; ++i) {
//         arr[i] = -50 + rand() % 101; 
//     }


//     Array dynamicArray = createDynamicArray(arr, size);

//     cout << "Original Array:" << endl;
//     for (int i = 0; i < size; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;


//     cout << "Sum of absolute values: " << dynamicArray[dynamicArray.size() - 4] << endl;
//     cout << "Average of absolute values: " << dynamicArray[dynamicArray.size() - 3] << endl;


//     cout << "Dynamic Array:" << endl;
//     cout << dynamicArray;

//     return 0;
// }

//! 2
// #include "Array.h"
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <cmath>
// using namespace std;

// Array createDynamicArray(int* arr, int size);

// Array createDynamicArray(int* arr, int size) {
//     Array result(size);
//     for (int i = 0; i < size; ++i) {
//         result[i] = arr[i];
//     }

//     // Знаходження максимального елемента та останнього елемента
//     int maxElement = arr[0];
//     int lastElement = arr[size - 1];
//     for (int i = 1; i < size; ++i) {
//         if (arr[i] > maxElement) {
//             maxElement = arr[i];
//         }
//     }

//     // Обчислення кореня квадратного з модуля добутку максимуму та останнього числа
//     double sqrtValue = sqrt(abs(maxElement * lastElement));

//     // Додавання кореня квадратного до кожного числа
//     for (int i = 0; i < size; ++i) {
//         result[i] += sqrtValue;
//     }

//     return result;
// }

// int main() {
//     const int size = 10;
//     int arr[size];

//     srand(static_cast<unsigned>(time(nullptr)));
//     for (int i = 0; i < size; ++i) {
//         arr[i] = -50 + rand() % 101; 
//     }

//     Array dynamicArray = createDynamicArray(arr, size);

//     cout << "Original Array:" << endl;
//     for (int i = 0; i < size; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Dynamic Array:" << endl;
//     cout << dynamicArray;

//     return 0;
// }

//! 3
#include "Array.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

Array createDynamicArray(int* arr, int size);

Array createDynamicArray(int* arr, int size) {
    Array result(size);
    for (int i = 0; i < size; ++i) {
        result[i] = arr[i];
    }

    double sum = 0, absSum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
        absSum += abs(arr[i]);
    }
    double avg = absSum / size;
    
    result.push_back(sum);
    result.push_back(avg);

    int maxElement = arr[0];
    int lastElement = arr[size - 1];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    double sqrtValue = sqrt(abs(maxElement * lastElement));

    for (int i = 0; i < size; ++i) {
        result[i] += sqrtValue;
    }

    return result;
}

int main() {
    int size;
    cout << "size = ? "; 
    cin >> size;

    int arr[size];

    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < size; ++i) {
        arr[i] = -50 + rand() % 101; 
    }

    Array dynamicArray = createDynamicArray(arr, size);

    cout << "Original Array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sum of absolute values: " << dynamicArray[dynamicArray.size() - 2] << endl;
    cout << "Average of absolute values: " << dynamicArray[dynamicArray.size() - 1] << endl;

    cout << "Dynamic Array:" << endl;
    cout << dynamicArray;

    return 0;
}
