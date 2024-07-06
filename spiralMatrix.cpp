#include<iostream>
using namespace std;

int spiralMatrix() {
    int row, col;

    cout << "\nEnter the number of rows: ";
    cin >> row;

    cout << "\nEnter the number of columns: ";
    cin >> col;

    int matrix[row][col]; //dynamic 2D matrix array initialization

    cout << "\nEnter the matrix elements: ";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nYour entered matrix: " << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //Spiral Order printing algorithm

    cout << "\nMatrix in spiral tranverse is: " << endl;
    int rowStart = 0, rowEnd = row-1, colStart = 0, colEnd = col-1;

    while(rowStart <= rowEnd && colStart <= colEnd) {
        
        //rowStart range
        for(int i=colStart; i<=colEnd; i++) {
            cout << matrix[rowStart][i] << " ";
        }
        rowStart++;
        cout << endl;

        //colEnd range
        for(int i=rowStart; i<=rowEnd; i++) {
            cout << matrix[i][colEnd] << " ";
        }
        colEnd--;

        //rowEnd range
        for(int i=colEnd; i>=colStart; i--) {
            cout << matrix[rowEnd][i] << " ";
        }
        rowEnd--;
        cout << endl;
        
        
        //colStart range
        for(int i=rowEnd; i>=rowStart; i--) {
            cout << matrix[i][colStart] << " ";
        }
        colStart++;
        
    }
    return -1;
}

int main() {
    spiralMatrix();
    return 0;
}
