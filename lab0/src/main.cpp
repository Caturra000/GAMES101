#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){
    const double PI = std::acos(-1);
    const double _45 = PI / 4;
    Eigen::Matrix<float, 3, 1> point;
    Eigen::Matrix3f rotateMatrix, transferMatrix;
    point << 2,
             1,
             1;
    rotateMatrix << std::cos(_45), -std::sin(_45), 0,
                    std::sin(_45),  std::cos(_45), 0,
                                0,              0, 1;
    transferMatrix << 1, 0, 1,
                      0, 1, 2,
                      0, 0, 1;
    std::cout << transferMatrix * rotateMatrix * point << std::endl;
    return 0;
}