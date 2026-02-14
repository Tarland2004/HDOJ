/*
成绩转换


Problem Description
输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
90~100为A;
80~89为B;
70~79为C;
60~69为D;
0~59为E;
 

Input
输入数据有多组，每组占一行，由一个整数组成。
 

Output
对于每组输入数据，输出一行。如果输入数据不在0~100范围内，请输出一行：“Score is error!”。
 

Sample Input
56
67
100
123
 

Sample Output
E
D
A
Score is error!

*/

#include <iostream>
using namespace std;

int main() {
    int score;
    while (cin >> score) {
        if (score >= 90 && score <= 100) {
            cout << "A" << endl;
        } else if (score >= 80 && score <= 89) {
            cout << "B" << endl;
        } else if (score >= 70 && score <= 79) {
            cout << "C" << endl;
        } else if (score >= 60 && score <= 69) {
            cout << "D" << endl;
        } else if (score >= 0 && score <= 59) {
            cout << "E" << endl;
        } else {
            cout << "Score is error!" << endl;
        }
    }
    return 0;
}


/*
switch-case

#include <iostream>
using namespace std;

int main() {
    int score;
    while (cin >> score) {
        if (score < 0 || score > 100) {
            cout << "Score is error!" << endl;
            continue;
        }

        switch (score / 10) {
            case 10:
            case 9:
                cout << "A" << endl;
                break;
            case 8:
                cout << "B" << endl;
                break;
            case 7:
                cout << "C" << endl;
                break;
            case 6:
                cout << "D" << endl;
                break;
            default:
                cout << "E" << endl;
                break;
        }
    }
    return 0;
}
*/
