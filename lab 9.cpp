#include <iostream>

template <typename T>
int countElements(const T* array, int size, T condition) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] > condition) {
            count++;
        }
    }
    return count;
}

int main() {
    // Пример работы на массивах различных типов данных и условиях
    int intArray[] = {1, 5, 7, 3, 9, 2};
    double doubleArray[] = {1.5, 2.7, 3.9, 4.2, 5.1};
    float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f};
    int n = 3;

    int intCount = countElements(intArray, 6, n);
    int doubleCount = countElements(doubleArray, 5, 3.0);
    int floatCount = countElements(floatArray, 4, 2.5f);

    std::cout << "Number of elements greater than " << n << " in intArray: " << intCount << std::endl;
    std::cout << "Number of elements greater than 3.0 in doubleArray: " << doubleCount << std::endl;
    std::cout << "Number of elements greater than 2.5 in floatArray: " << floatCount << std::endl;

    return 0;
}
