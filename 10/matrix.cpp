#ifndef MATRIX_CPP
#define MATRIX_CPP

#include <iostream>
#include "matrix.h"

template<typename T> 
Matrix<T>::Matrix(int n) : n{n}{
    m = new T*[n];
    for(int i = 0; i < n; i++)
        m[i] = new T[n];
}

template<typename T> 
Matrix<T>::~Matrix(){ delete m;};

template<typename T> 
Matrix<T>::Matrix(const Matrix<T>& matrix) : n{matrix.n}{
    for(int i = 0; i < matrix.n; i++)
        for(int j = 0; j < matrix.n; j++)
            m[i][j] = matrix.m[i][j];
};

template<typename T> 
T** Matrix<T>::getMatrix(){
    return **m;
};

template<typename T> 
int Matrix<T>::getDimension() const{
    return n;
}

template<typename T> 
void Matrix<T>::set(int i, int j, T x){
    m[i][j] = x;
}

template<typename T> 
Matrix<T> Matrix<T>::operator*(Matrix<T>& matrix) const{
    Matrix<T> newM(matrix.n);

    for(int i = 0; i < matrix.n; i++){
        for(int j = 0; j < matrix.n; j++){
            int sum = 0;
            for(int k = 0; k < matrix.n; k++){
                sum += m[i][k] * matrix.m[k][j];
            }
            newM.set(i, j, sum);
        }
    }

    return newM;
};

template <typename T>
T* Matrix<T>::operator[](int i) const {
  return m[i];
}

template<typename T> 
ostream& operator<<(ostream& ausgabe, const Matrix<T>& matrix){
    int n = matrix.getDimension();

    for(int i = 0; i < n; i++){
        ausgabe << "\t";
        for(int j = 0; j < n; j++)
            ausgabe << matrix[i][j] << "\t";
        ausgabe << "\n";
    }
    return ausgabe << endl;
};

#endif