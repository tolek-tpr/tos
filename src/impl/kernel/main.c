#include "print.h"
#include<stdio.h>

void kernel_main() {
    char* sda = "";
    print_clear();
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("");
    printf("test");
    scanf("%s", sda);
    printf(sda);
}
