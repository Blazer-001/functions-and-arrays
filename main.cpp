#include <iostream>

// task 1
void ElementAboveAvg() {
    int n;
    std::cin >> n;

    int* arr = new int[n];
    long long sum = 0;

    for (int i{}; i < n; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }
    double average = (double) sum/n;
    std::cout << "Average: " << average << '\n';
    std::cout << "Above average: ";

    for (int i{}; i < n; ++i) {
        if (arr[i] > average) {
            std::cout << arr[i] << " ";
        }
    }
    delete[] arr;
}


// task 2
void FirstPosition() {
    int n{}, x{};
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
        std::cout << "Not foud" << '\n';
    }
    delete[] arr;
}


// task 3
void ReplaceNegatives(int* arr,int size, std::string message = "") {
    if (!message.empty())
        std::cout << message << '\n';

    for (int i{}; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}


int main() {
    // task 1
    ElementAboveAvg();
    return 0;

    // task 2
    FirstPosition();
    return 0;

    // task 3
    ReplaceNegatives();

}
