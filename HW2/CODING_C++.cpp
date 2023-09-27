#include <iostream>

// Fungsi untuk menampilkan matriks
void displayMatrix(int mat[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Fungsi untuk menambahkan dua matriks
void addMatrix(int mat1[][4], int mat2[][4], int result[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Fungsi untuk mengurangkan dua matriks
void subtractMatrix(int mat1[][4], int mat2[][4], int result[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Fungsi untuk mengalikan dua matriks
void multiplyMatrix(int mat1[][4], int mat2[][4], int result[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[4][4] = {{7, 8, 9, 1},
                        {2, 4, 6, 8},
                        {1, 3, 5, 7},
                        {9, 11, 13, 14}};

    int matrix2[4][4] = {{5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16},
                        {17, 18, 19, 20}};

    int result[4][4];

    std::cout << "Matrix 1:\n";
    displayMatrix(matrix1, 4, 4);

    std::cout << "\nMatrix 2:\n";
    displayMatrix(matrix2, 4, 4);

    // Penjumlahan
    addMatrix(matrix1, matrix2, result);
    std::cout << "\nHasil Penjumlahan:\n";
    displayMatrix(result, 4, 4);

    // Pengurangan
    subtractMatrix(matrix1, matrix2, result);
    std::cout << "\nHasil Pengurangan:\n";
    displayMatrix(result, 4, 4);

    // Perkalian
    multiplyMatrix(matrix1, matrix2, result);
    std::cout << "\nHasil Perkalian:\n";
    displayMatrix(result, 4, 4);

    return 0;
}
