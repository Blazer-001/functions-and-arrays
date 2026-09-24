#include <iostream>

// task 2
void FirstPosition(int n, int x) {
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
    if (position != 1) {
        std::cout << "Position: " << position << '\n';
    }
    else {
        std::cout << "Not foud" << '\n';
    }
    delete[] arr;
}


int main() {


}
