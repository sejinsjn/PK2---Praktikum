#ifndef MATRIX_H
#define MATRIX_H

using namespace std;

template<typename T> class Matrix{
    const int n;
    T **m;
public:
    Matrix(int n);
    ~Matrix();
    Matrix(const Matrix<T>& matrix);
    T** getMatrix();
    int getDimension() const;
    void set(int i, int j, T x);
    Matrix<T> operator*(Matrix<T>& matrix) const;
    T* operator[](int i) const;
};

#include "matrix.cpp"

#endif