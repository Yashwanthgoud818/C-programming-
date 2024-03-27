#include <iostream>

class FloydTriangle {
private:
    int rows;

public:
    FloydTriangle(int r) : rows(r) {
        std::cout << "Floyd's Triangle with " << rows << " rows:" << std::endl;
    }
    ~FloydTriangle() {
        std::cout << "Destructor called. Memory released." << std::endl;
    }
    void printFloydTriangle() {
        int num = 1;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j <= i; ++j) {
                std::cout << num << " ";
                ++num;
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int rows;
    std::cout << "Enter the number of rows for Floyd's Triangle: ";
    std::cin >> rows;

    FloydTriangle floyd(rows); 
    floyd.printFloydTriangle(); 
    return 0; 
}

