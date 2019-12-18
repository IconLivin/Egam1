#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <random>
#include <chrono>

typedef std::vector<std::vector<double>> Matrix;
void printMatrix(Matrix const& mat);
template<class T>
bool equal(const T& a, const T& b) {
    if (abs(a - b) < 0.0000001) return true;
    else return false;
}

//------------------GAUS---------------------
void Gauss(std::vector<std::vector<double>> A, std::vector<double> b, std::vector<double> x, int& t) {
    int i, j, k;
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
    int size = b.size();
    double alfa;
    for (j = 0; j < size; j++) {
        for (i = j + 1; i < size; i++) {
            alfa = A[i][j] / A[j][j];
            for (k = j; k < size; k++) {
                A[i][k] -= alfa * A[j][k];
            }
            b[i] -= alfa * b[j];
        }

    }
    x[size - 1] = b[size - 1] / A[size - 1][size - 1];
    for (i = size - 2; i >= 0; i--) {
        double sum = 0;
        for (j = i + 1; j < size; j++) {
            sum += A[i][j] * x[j];
        }
        x[i] = (b[i] - sum) / A[i][i];
    }

     end = std::chrono::high_resolution_clock::now();
     t = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

}

Matrix inversion(Matrix A)
{
    double temp;

    Matrix E(A.size(),std::vector<double>(A.size()));

 

    for (int i = 0; i < A.size(); ++i) {
        E[i][i] = 1.0;
   }

    for (int k = 0; k < A.size(); k++)
    {
        temp = A[k][k];

        for (int j = 0; j < A.size(); j++)
        {
            A[k][j] /= temp;
            E[k][j] /= temp;
        }

        for (int i = k + 1; i < A.size(); i++)
        {
            temp = A[i][k];

            for (int j = 0; j < A.size(); j++)
            {
                A[i][j] -= A[k][j] * temp;
                E[i][j] -= E[k][j] * temp;
            }
        }
    }

    for (int k = A.size() - 1; k > 0; k--)
    {
        for (int i = k - 1; i >= 0; i--)
        {
            temp = A[i][k];

            for (int j = 0; j < A.size(); j++)
            {
                A[i][j] -= A[k][j] * temp;
                E[i][j] -= E[k][j] * temp;
            }
        }
    }

    return E;

  
}

std::vector<double> Matr_Method(Matrix A, std::vector<double> b, std::vector<double> x, int& t) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
    int size = b.size();
    Matrix E = inversion(A);
    
    for (int i = 0; i < size; ++i) {
        double sum = 0;
        for (int j = 0; j < size; ++j) {
            sum += E[i][j] * b[j];
        }
        x[i] = sum;
    }
    end = std::chrono::high_resolution_clock::now();
    t = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    std::cout << "Матричный метод:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << x[i] << std::endl;
    }
    return x;
}

void Jordan(Matrix A, std::vector<double> b, std::vector<double> x, int &t) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
    int i, j, k;
    int size = b.size();
    double alfa;
    for (j = 0; j < size; j++) {
        for (i = j + 1; i < size; i++) {
            alfa = A[i][j] / A[j][j];
            for (k = j; k < size; k++) {
                A[i][k] -= alfa * A[j][k];
            }
            b[i] -= alfa * b[j];
        }

    }
    for (j = size - 1; j >= 0; --j) {
        for (i = j - 1; i >= 0; --i) {
            alfa = A[i][j] / A[j][j];
            for (k = j; k >= 0; --k) {
                A[i][k] -= alfa * A[j][k];
            }
            b[i] -= alfa * b[j];
        }
    }
    for (i = size - 1; i >= 0; --i) {
        x[i] = b[i] / A[i][i];
    }
    end = std::chrono::high_resolution_clock::now();
    t = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Решение методом Жордана:\n";
    for (i = 0; i < x.size(); ++i) {
        std::cout << x[i] << std::endl;
    }

}

//------------------------------------------------
std::vector<double> subtr(const std::vector<double>& v1, const std::vector<double>& v2) {
    std::vector<double> result(v1.size());
    if (v1.size() != v2.size()) {
        std::cout << "subtraction error!" << std::endl;
    }
    else {
        for (size_t i = 0; i < v1.size(); i++) {
            result[i] = v1[i] - v2[i];
        }
    }
    return result;
}

void printMatrix(Matrix const& mat) {
    std::cout << "Матрица:" << std::endl;
    for (size_t row = 0; row < mat.size(); ++row) {
        for (size_t col = 0; col < mat[0].size(); ++col) {
            std::cout << mat[row][col] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void printVector(const std::vector<double>& v) {
    for (double d : v) {
        std::cout << d << std::endl;
    }
    std::cout << std::endl;
}

double deter(const Matrix& a) {
    double determinant = 0;
    if (a.size() == 1) { determinant = a[0][0]; }
    else {
        if (a.size() == 2) {
            determinant = a[0][0] * a[1][1] - a[1][0] * a[0][1];
        }
        else {
            for (size_t i = 0; i < a.size(); i++) {
                //prepare tmp matrix
                Matrix tmp = a;
                tmp.erase(tmp.begin());
                for (size_t j = 0; j < tmp.size(); j++) {
                    tmp[j].erase(tmp[j].begin() + i);
                }

                //calc det
                determinant += pow(-1, i + 2) * a[0][i] * deter(tmp);
            }
        }
    }
    return determinant;
}

std::vector<double> mul_Z(Matrix A, std::vector<double> v) {
    std::vector<double> res(v.size());
    for (size_t i = 0; i < v.size(); i++) { //matrix row
        double sum = 0;
        for (size_t j = 0; j < v.size(); j++) { //matrix column and vector column
            sum += A[i][j] * v[j];
        }
        res[i] = sum;
    }
    return res;
}

std::vector<double> mul_R(Matrix A, std::vector<double> v, const double& coeff) {
    std::vector<double> res(v.size());
    for (size_t i = 0; i < v.size(); i++) { //matrix row
        double sum = 0;
        for (size_t j = 0; j < v.size(); j++) { //matrix column and vector column
            sum += A[i][j] * v[j];
        }
        res[i] = coeff * sum;
    }
    return res;
}

std::vector<double> sum(const std::vector<double>& v1, const std::vector<double>& v2) {
    int size = v1.size();
    std::vector<double> res(size);
    if (v1.size() != v2.size()) {
        std::cout << "sum error! " << "v1 is " << v1.size() << " v2 is " << v2.size() << std::endl;
        return res;
    }
    for (int i = 0; i < size; i++) {
        res[i] = v1[i] + v2[i];
    }
    return res;
}

double secondVectorNorm(const std::vector<double>& v) {
    double tmpSum = 0;
    for (double val : v) {
        tmpSum += pow(val, 2);
    }
    return sqrt(tmpSum);
}

Matrix getSubmatrix(const Matrix& A, int size) {
    std::vector<std::vector<double>> tmp(size, std::vector<double>(size));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            tmp[i][j] = A[i][j];
        }

    }
    return tmp;
}

bool isAcceptedbySilveseter(const Matrix& A) {
    bool isAccepted = true;
    int tmpSize = A.size();
    for (int i = 1; i < A.size() + 1; i++) { //all minors
        Matrix tmp = getSubmatrix(A, i);
        //printMatrix(tmp);
        double tmpDet = deter(tmp);
        //std::cout << tmpDet << std::endl;

        if (tmpDet <= 0) {
            isAccepted = false;
            break;
        }
    }
    return isAccepted;
}

bool isSimmetric(const Matrix& A) {
    bool isSim = true;
    for (int i = 0; i < A.size(); ++i) {
        if (!isSim) break;
        for (int j = 0; j < A.size(); ++j) {
            if (A[i][j] != A[j][i]) {
                isSim = false;
                break;
            }
        }
    }
    return isSim;
}

bool isVecEqZero(const std::vector<double>& v) {
    bool eq = true;
    for (double d : v) {
        if (d != 0) {
            eq = false;
            break;
        }
    }
    return eq;
}

//------------------EasyIterations--------------
void
easyIterations(std::vector<std::vector<double>> A, std::vector<double> b, std::vector<double> x, const double eps, int& t) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();

    int size = b.size();
    std::vector<double> x0(size);
    int iterCounter = 0;
    double currentEps = secondVectorNorm(subtr(b, mul_Z(A, x)));

    while (currentEps > eps) {

        for (int i = 0; i < size; i++) {
            x0 = x;
            double tmpX = 0;
            for (int j = 0; j < size; j++) {
                if (j == i) continue;
                tmpX -= A[i][j] * x0[j];
            }
            x[i] = (tmpX + b[i]) / A[i][i];
        }
        currentEps = secondVectorNorm(subtr(b, mul_Z(A, x)));
        iterCounter++;
    }
    end = std::chrono::high_resolution_clock::now();
    t = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Решение по методу простых итераций:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << x[i] << std::endl;
    }
    std::cout << "Итераций по методу простых итераций: " << iterCounter << std::endl;
}

bool isDiag(const Matrix& A) {
    bool isDiag = true;
    double sum = 0;
    int size = A.size();
    for (int i = 0; i < size; i++) {
        sum = 0;
        for (int j = 0; j < size; j++) {
            if (i != j)
                sum += A[i][j];
        }
        if (sum > A[i][i]) {
            isDiag = false;
            break;
        }
    }
    return isDiag;
}

//----------------------------Zeidel-------------------------
bool isConvergenceZeidel(const Matrix& A) {
    double sum = 0;
    for (std::vector<double> v : A) {
        for (double val : v) {
            sum += pow(val, 2);
        }
    }
    double eNorm = sqrt(sum);
    return (eNorm < 1);
}

void Zeidel(Matrix A, std::vector<double> b, std::vector<double> x, double eps, int &t) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
  
    Matrix alpha;
    std::vector<double> beta;
    int size = A.size();

    //prepare beta-vector
    for (size_t i = 0; i < b.size(); i++) {
        beta.push_back(b[i] / A[i][i]);
    }

    //prepare alpha matrix
    for (const std::vector<double>& v : A) {
        alpha.push_back(v);
    }
    for (int i = 0; i < size; i++) { //select row
        for (int j = 0; j < size; j++) { //select column
            if (i != j) alpha[i][j] = -(A[i][j] / A[i][i]);
            else alpha[i][j] = 0;
        }
    }

    int iterCounter = 0;
    double currentEps = secondVectorNorm(subtr(b, mul_Z(A, x)));
    while (currentEps > eps) {
        x = sum(beta, mul_Z(alpha, x));
        iterCounter++;
        currentEps = secondVectorNorm(subtr(b, mul_Z(A, x)));
    }
    end = std::chrono::high_resolution_clock::now();
    t = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Решение по методу Зейделя:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << x[i] << std::endl;
    }
    std::cout << "Итераций по методу Зейделя: " << iterCounter << std::endl;

}

//-------------------Relaxing--------------------------------
const std::vector<double> operator*(const double& left, const std::vector<double>& right) {
    std::vector<double> tmp(right.size());
    tmp = right;
    for (size_t i = 0; i < tmp.size(); i++)
        tmp[i] = tmp[i] * left;
    return tmp;

}

void relaxing(std::vector<std::vector<double>> A, std::vector<double> b, std::vector<double> x, const double eps, int &t) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();

    double coeff;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dist(1, 2);
    coeff = dist(gen);

    Matrix alpha;
    std::vector<double> beta;
    int size = A.size();

    //prepare beta-vector
    for (size_t i = 0; i < b.size(); i++) {
        beta.push_back(coeff * (b[i] / A[i][i]));
    }

    //prepare alpha matrix
    for (const std::vector<double>& v : A) {
        alpha.push_back(v);
    }
    for (int i = 0; i < size; i++) { //select row
        for (int j = 0; j < size; j++) { //select column
            if (i != j) alpha[i][j] = -(A[i][j] / A[i][i]);
            else alpha[i][j] = 0;
        }
    }

    int iterCounter = 0;
    double currentEps = secondVectorNorm(subtr(b, mul_Z(A, x)));
    while (currentEps > eps) {
        x = sum((1 - coeff) * x, sum(beta, mul_R(alpha, x, coeff)));
        iterCounter++;
        currentEps = secondVectorNorm(subtr(b, mul_Z(A, x)));
    }
    end = std::chrono::high_resolution_clock::now();
    t = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Решение по методу верхней релаксации:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << x[i] << std::endl;
    }
    std::cout << "Итераций по методу верхней релаксации: " << iterCounter << std::endl;
    std::cout << "coeff=" << coeff << std::endl;

}

//----------------------------Kramer----------------------------
void Kramer(Matrix A, std::vector<double> b, std::vector<double> x,int& t) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
    x.clear();
    int size = b.size();
    std::vector<double> dets;
    double Adet = deter(A);
    if (Adet != 0) {
        for (int i = 0; i < size; i++) {
            //prepare tmp matrix
            Matrix tmp;
            for (const std::vector<double>& v : A) {
                tmp.push_back(v);
            }
            for (size_t j = 0; j < tmp.size(); j++) {
                tmp[j][i] = b[j];
            }
            dets.push_back(deter(tmp));
        }
        for (double d : dets) {
            x.push_back(d / Adet);
        }
        end = std::chrono::high_resolution_clock::now();
        t = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
        std::cout << "Решение по методу Крамера:" << std::endl;
        for (int i = 0; i < size; i++) {
            if (x.size())
                std::cout << x[i] << std::endl;
        }
    }
}

void printMenu() {
    std::cout << "1. Ввод системы\n"
        << "2. Генерация системы\n"
        << "3. Вычисление корней\n"
        << "4. Выход\n";
}

Matrix inputMatrix(int elementsCount) {
    std::vector<std::vector<double>> matrix(elementsCount, std::vector<double>(elementsCount));
    for (std::vector<double>& row : matrix) {
        for (double& column : row) {
            std::cin >> column;
        }
    }
    return matrix;
}

std::vector<double> inputVector(int elementsCount) {
    std::vector<double> v(elementsCount);
    for (int i = 0; i < elementsCount; i++) {
        std::cin >> v[i];
    }
    return v;
}

Matrix generateMatrix(int elementsCount, int ot = 0, int to = 100, bool isdoub = false) {

    Matrix matrix(elementsCount, std::vector<double>(elementsCount));
    for (int i = 0; i < elementsCount; i++)
        for (int j = i; j < elementsCount; j++) {
            
            matrix[i][j] = matrix[j][i] = ot + rand() % (to - ot);
            if (isdoub) {
                double mantis = double(rand() % 100) / 100;
                matrix[i][j] = matrix[j][i] += mantis;
            }
            if (i == j) {
                matrix[i][j] += to * 10;;
            }
        }
    return matrix;
}

std::vector<double> generateVector(int elementsCount,int ot,int to,bool isdoub) {

    std::vector<double> v(elementsCount);
    for (double& val : v) {
        val = ot + rand() % (to - ot);
        if (isdoub) {
            double mantis = double(rand() % 100) / 100;
            val += mantis;
        }
    }
    return v;
}

//void useMenu() {
//    int number = 0;
//    bool hasMatrix = false;
//    int elementsCount = 0;
//
//    Matrix A;
//    std::vector<double> b;
//    std::vector<double> x;
//
//    std::chrono::time_point<std::chrono::high_resolution_clock> time[6];
//
//    while (number != 4) {
//        printMenu();
//        std::cin >> number;
//        switch (number) {
//        case 1: {
//            std::cout << "Ведите порядок системы" << std::endl;
//            std::cin >> elementsCount;
//            if (elementsCount < 2 || elementsCount > 10)
//                std::cout << "Порядок системы должен быть в диапазоне [2, 10]" << std::endl;
//            else {
//                std::cout << "Ведите матрицу\n";
//                A = inputMatrix(elementsCount);
//
//                if (isAcceptedbySilveseter(A)) {
//                    std::cout << "Матрица положительно определенная" << std::endl;
//                }
//                else {
//                    std::cout << "Матрица НЕ положительно определенная" << std::endl;
//                }
//
//                std::cout << "Ведите вектор свободных членов" << std::endl;
//                b = inputVector(elementsCount);
//                std::cout << "Ведите начальное приближение" << std::endl;
//                x = inputVector(elementsCount);
//            }
//            hasMatrix = true;
//            break;
//        }
//        case 2: {
//            std::cout << "Ведите порядок системы" << std::endl;
//            std::cin >> elementsCount;
//            if (elementsCount < 2 || elementsCount > 10)
//                std::cout << "Порядок системы должен быть в диапазоне [2, 10]" << std::endl;
//            else {
              // A = generateMatrix(elementsCount);
//                printMatrix(A);
//                b = generateVector(elementsCount);
//                std::cout << "Вектор свободных членов:" << std::endl;
//                printVector(b);
//                std::cout << "Начальное приближение:" << std::endl;
//                printVector(x);
//            }
//            hasMatrix = true;
//            break;
//        }
//        case 3: {
             // double detA = det(A);
//            if ((hasMatrix && (detA != 0)) || (hasMatrix && (detA == 0) && isVecEqZero(b))) {
//                bool isAposDef = isAcceptedbySilveseter(A);
//                bool isAsim = isSimmetric(A);
//                bool isAdiag = isDiag(A);
//                double accurancy = 1;
//                std::cout << "Введите точность" << std::endl;
//                std::cin >> accurancy;
//                if (accurancy <= 0) std::cout << "Неверная точность" << std::endl;
//                else {
//                    time[0] = std::chrono::high_resolution_clock::now();
//                    Gauss(A, b, x);
//                    time[1] = std::chrono::high_resolution_clock::now();
//                    if (detA != 0) Kramer(A, b, x);
//                    time[2] = std::chrono::high_resolution_clock::now();
//                    if (isAposDef && isAdiag) easyIterations(A, b, x, accurancy);
//                    time[3] = std::chrono::high_resolution_clock::now();
       //             if (isAposDef && isAdiag) Zeidel(A, b, x, accurancy);
//                    time[4] = std::chrono::high_resolution_clock::now();
//                    if (isAposDef && isAdiag) relaxing(A, b, x, accurancy);
//                    time[5] = std::chrono::high_resolution_clock::now();
//
//                    std::cout << std::endl;
                       //  std::cout << "Время выполнения методом Гаусса - "
                         //<<std::chrono::duration_cast<std::chrono::microseconds>(time[1] - time[0]).count()
//                        << std::endl;
//                    std::cout << "Время выполнения методом Крамера - "
//                        << std::chrono::duration_cast<std::chrono::microseconds>(time[2] - time[1]).count()
//                        << std::endl;
//                    std::cout << "Время выполнения методом Простых итераций - "
//                        << std::chrono::duration_cast<std::chrono::microseconds>(time[3] - time[2]).count()
//                        << std::endl;
//                    std::cout << "Время выполнения методом Зейделя - "
//                        << std::chrono::duration_cast<std::chrono::microseconds>(time[4] - time[3]).count()
//                        << std::endl;
//                    std::cout << "Время выполнения методом Верхней релаксации - "
//                        << std::chrono::duration_cast<std::chrono::microseconds>(time[5] - time[4]).count()
//                        << std::endl;
//
//                }
//            }
//            else {
//                if (!hasMatrix) {
//                    std::cout << "Введите матрицу!" << std::endl;
//                }
//                else {
//                    std::cout << "Система несовместна!" << std::endl;
//                }
//
//            }
//        }
//        }
//    }
//}
//
//
