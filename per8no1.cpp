#include <iostream>
#include <vector>

bool is0dd(int num) {
    return num % 2 != 0;
}

void printSmallestEven(const std::vector<int>& arr) {
    int smallestEven = -1;
    int smallestEvenIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];

        if (num % 2 == 0) {
            if (smallestEven == -1 || num < smallestEven){
                smallestEven = num;
                smallestEvenIndex = i;
            }
        }
    }

    if (smallestEvenIndex != -1) {
        std::cout << "Nilai genap terkecil: " << smallestEven << std::endl;
        std::cout << "Index; " << smallestEvenIndex << std::endl;
    } else {
        std::cout << "Tidak ada nilai genap dalam deret bilangan." << std::endl;
    }
}

int main(){
    std::vector<int> arr = {6, 7, 4, 3, 2};
    printSmallestEven(arr);

    return 0;
}
