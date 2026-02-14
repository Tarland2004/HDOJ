/*
第几天？


Problem Description
给定一个日期，输出这个日期是该年的第几天。
 

Input
输入数据有多组，每组占一行，数据格式为YYYY/MM/DD组成，具体参见sample input ,另外，可以向你确保所有的输入数据是合法的。
 

Output
对于每组输入数据，输出一行，表示该日期是该年的第几天。
 

Sample Input
1985/1/20
2006/3/12
 

Sample Output
20
71

*/

#include <iostream>
#include <sstream>
using namespace std;

// 判断闰年
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 计算某日期是该年的第几天
int dayOfYear(int year, int month, int day) {
    // 月天数
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // 闰年特殊
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    int totalDays = 0;
    // 累加前面几个月的天数
    for (int i = 0; i < month - 1; ++i) {
        totalDays += daysInMonth[i];
    }
    // 加上当前日期
    totalDays += day;

    return totalDays;
}


// 此处输入为类似“1985/1/20”的字符串 需要特殊处理

//1、 C scanf
int main() {
    int year, month, day;
    while (scanf("%d/%d/%d", &year, &month, &day) != EOF) {
        cout << dayOfYear(year, month, day) << endl;
    }
    return 0;
}

//2、 stringstream
/*
int main() {
    string input;
    while (getline(cin, input)) {
        // 使用stringstream解析输入
        stringstream ss(input);
        int year, month, day;
        char delimiter; // 用于跳过 '/'
        
        ss >> year >> delimiter >> month >> delimiter >> day;

        // 输出结果
        cout << dayOfYear(year, month, day) << endl;
    }

    return 0;
}
*/