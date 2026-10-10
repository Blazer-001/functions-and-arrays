#include <iostream>

// task 1
void ElementAboveAvg() {
    int n;
    std::cin >> n;

    int *arr = new int[n];
    long long sum = 0;

    for (int i{}; i < n; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }
    double average = (double) sum / n;
    std::cout << "Average: " << average << '\n';
    std::cout << "Above Average: ";

    for (int i{}; i < n; ++i) {
        if (arr[i] > average) {
            std::cout << arr[i] << " ";
        }
    }
    delete[] arr;
}


// task 2
void FirstPosition() {
    int n;
    int x;
    std::cin >> n;
    std::cin >> x;

    int *arr = new int[n];
    for (int i{}; i < n; ++i) {
        std::cin >> arr[i];
    }

    int position = -1;
    for (int i{}; i < n; ++i) {
        if (arr[i] == x) {
            position = i + 1;
            break;
        }
    }
    if (position != -1) {
        std::cout << "Position: " << position << '\n';
    } else {
        std::cout << "Not found" << '\n';
    }
    delete[] arr;
}


// task 5
void ReplaceNegatives(int *arr, int size, std::string message = "") {
    if (!message.empty())
        std::cout << message << '\n';

    for (int i{}; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}


// task 6
void ArrayReversal() {
    int a;
    std::cin >> a;

    int *arr = new int[a];
    for (int i{}; i < 5; ++i) {
        std::cin >> arr[i];
    }
    for (int i = 4; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
}

// task 7
void LocalMax(const int *arr, int n) {
    for (int i = 1; i < n - 2; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << '\n';
}

// 10.
int *Positives(const int *arr, int size, int& new_size) {
    new_size = 0;
    int *positives = new int[new_size];
    for (int i{}; i < size; ++i)
        if (arr[i] > 0)
            ++new_size;

    int* result = new int[new_size];
    int count = 0;

}

int main() {
    // task 1
    // ElementAboveAvg();
    //
    //
    // // task 2
    // FirstPosition();
    //
    //
    // // task 5
    // int size{};
    // int *arr = new int[size];
    // ReplaceNegatives(arr, size, "Array:");
    //
    // delete[] arr;
    //
    //
    // // task 6
    // ArrayReversal();
    // std::cout << "Input:" << '\n';
    // std::cout << "Output:" << '\n';
    //
    // // task 7
    // int n;
    // std::cin >> n;
    //
    // int *arr2 = new int[n];
    // for (int i{}; i < n; ++i) {
    //     std::cin >> arr[i];
    // }
    // LocalMax(arr2, n);
    //
    // delete[] arr2;


    // 10
    const int SIZE = 6;
    int *positives = new int[SIZE] {-1, 5, 0, 7, -3, 2};

    int new_size = 0;
    int* pos = Positives(positives, SIZE, new_size);

    delete[] positives;
    positives = nullptr;
}