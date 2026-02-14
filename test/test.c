#include <stdio.h>

int main() {
    char a, b, c;
    
    // 循环处理多组输入
    while (scanf(" %c%c%c", &a, &b, &c) != EOF) {
        // 按ASCII码排序三个字符
        if (a > b) { char temp = a; a = b; b = temp; }
        if (a > c) { char temp = a; a = c; c = temp; }
        if (b > c) { char temp = b; b = c; c = temp; }
        
        // 输出排序后的结果
        printf("%c %c %c\n", a, b, c);
    }
    
    return 0;
}