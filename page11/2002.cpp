/*
计算球体积


Problem Description
根据输入的半径值，计算球的体积。
 

Input
输入数据有多组，每组占一行，每行包括一个实数，表示球的半径。
 

Output
输出对应的球的体积，对于每组输入数据，输出一行，计算结果保留三位小数。
 

Sample Input
1
1.5
 

Sample Output
4.189
14.137
 

Hint

#define PI 3.1415927

*/

#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.1415927

// 球体积公式：$$ V = \frac{4}{3} \pi r^3 $$
int main() {
    double radius;
    
    while (cin >> radius) {
        double volume = (4.0 / 3.0) * PI * radius * radius * radius;
        cout << fixed << setprecision(3) << volume << endl;
    }
    
    return 0;
}