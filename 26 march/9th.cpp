#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

void multiplyMatrix(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible: Number of columns of first matrix must be equal to the number of rows of the second matrix." << endl;
        return;
    }
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    cout << "Enter the number of rows and columns of matrix 1: ";
    cin >> rows1 >> cols1;
    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the number of rows and columns of matrix 2: ";
    cin >> rows2 >> cols2;
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cin >> mat2[i][j];
        }
    }

    multiplyMatrix(mat1, mat2, result, rows1, cols1, rows2, cols2);

    cout << "Resultant matrix after multiplication:" << endl;
    displayMatrix(result, rows1, cols2);

    return 0;
}

