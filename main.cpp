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
int *Positives(const int *arr, int size, int &new_size) {
    new_size = 0;
    const int *source = arr;
    for (int i{}; i < size; ++i) {
        if (*source > 0)
            ++new_size;
        ++source;
    }

    int *result = new int[new_size];
    int *result_ptr = result;
    source = arr;
    for (int i{}; i < size; ++i) {
        if (*source > 0) {
            *result_ptr = *source;
            ++result_ptr;
        }
        ++source;
    }

    return result;
}

// 5. Минимум каждого столбца
void MinColumnMatrix(int **matrix, int rows, int cols) {
    for (int i{}; i < cols; ++i) {
        int min = matrix[0][i];
        for (int j{1}; j < rows; ++j)
            if (matrix[j][i] < min)
                min = matrix[j][i];
        std::cout << min << ' ';
    }
    std::cout << '\n';
}

int main() {
    // task 1
    ElementAboveAvg();


    // task 2
    FirstPosition();


    // task 5
    int size{};
    int *arr = new int[size];
    ReplaceNegatives(arr, size, "Array:");

    delete[] arr;


    // task 6
    ArrayReversal();
    std::cout << "Input:" << '\n';
    std::cout << "Output:" << '\n';

    // task 7
    int n;
    std::cin >> n;

    int *arr2 = new int[n];
    for (int i{}; i < n; ++i) {
        std::cin >> arr[i];
    }
    LocalMax(arr2, n);

    delete[] arr2;


    // task 10
    const int SIZE = 6;
    int *positives = new int[SIZE]{-1, 5, 0, 7, -3, 2};

    int new_size = 0;
    int *pos = Positives(positives, SIZE, new_size);

    for (int i = 0; i < new_size; ++i)
        std::cout << *(pos + i) << " ";
    std::cout << std::endl;

    delete[] positives;
    positives = nullptr;
    delete[] pos;

    // 5. Минимум каждого столбца
    const int rows{4}, cols{4};

    int **matrix = new int *[rows];
    for (int i{}; i < rows; ++i) {
        matrix[i] = new int[cols];
        for (int j{}; j < cols; ++j)
            std::cin >> matrix[i][j];
    }

    MinColumnMatrix(matrix, rows, cols);

    for (int i{}; i < rows; ++i)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
