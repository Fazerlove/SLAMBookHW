#include <iostream>
#include <ctime>
#include <Eigen/Core>
#include <Eigen/Dense>

using namespace Eigen;

#define MATRIX_SIZE 100

int main(int argc, char** argv)
{
    MatrixXd Random_Matrix = MatrixXd::Random(MATRIX_SIZE,MATRIX_SIZE);
    MatrixXd A = Random_Matrix * Random_Matrix.transpose();
    VectorXd B = VectorXd::Random(MATRIX_SIZE);
    VectorXd x = A.colPivHouseholderQr().solve(B);
    VectorXd y = A.ldlt().solve(B);

    return 0;
}