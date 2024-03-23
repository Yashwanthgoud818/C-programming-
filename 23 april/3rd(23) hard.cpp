#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int >>data;
    size_t rows;
    size_t cols;

public:
    // Constructor
    Matrix(size_t rows, size_t cols) : rows(rows), cols(cols) {
        data.resize(rows, std::vector<int>(cols, 0));
    }

    // Overloading + operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            std::cerr << "Matrix dimensions mismatch for addition" << std::endl;
            return *this;
        }

        Matrix result(rows, cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Overloading - operator for matrix subtraction
    Matrix operator-(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            std::cerr << "Matrix dimensions mismatch for subtraction" << std::endl;
            return *this;
        }

        Matrix result(rows, cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    // Overloading * operator for matrix multiplication
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            std::cerr << "Matrix dimensions mismatch for multiplication" << std::endl;
            return *this;
        }

        Matrix result(rows, other.cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < other.cols; ++j) {
                for (size_t k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    // Overloading << operator for printing matrix
    friend std::ostream& operator<<(std::ostream& out, const Matrix& mat) {
        for (size_t i = 0; i < mat.rows; ++i) {
            for (size_t j = 0; j < mat.cols; ++j) {
                out << mat.data[i][j] << " ";
            }
            out << std::endl;
        }
        return out;
    }
};

int main() {
    // Example usage
    Matrix mat1(2, 3);
    mat1 = {{1, 2, 3},
            {4, 5, 6}};

    Matrix mat2(2, 3);
    mat2 = {{7, 8, 9},
            {10, 11, 12}};

    std::cout << "Matrix 1:" << std::endl << mat1 << std::endl;
    std::cout << "Matrix 2:" << std::endl << mat2 << std::endl;

    Matrix addition = mat1 + mat2;
    std::cout << "Addition:" << std::endl << addition << std::endl;

    Matrix subtraction = mat1 - mat2;
    std::cout << "Subtraction:" << std::endl << subtraction << std::endl;

    Matrix multiplication = mat1 * mat2;
    std::cout << "Multiplication:" << std::endl << multiplication << std::endl;

    return 0;
}

