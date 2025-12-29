#include <stdio.h>

#define S_JAN 3
#define S_FEB 6
#define S_MAR 0
#define S_APR 3
#define S_MAY 5
#define S_JUN 1
#define S_JUL 3
#define S_AUG 6
#define S_SEP 2
#define S_OCT 2
#define S_NOV 0
#define S_DEC 2
#define D_JAN 31
#define D_FEB 29
#define D_MAR 31
#define D_APR 30
#define D_MAY 31
#define D_JUN 30
#define D_JUL 31
#define D_AUG 31
#define D_SEP 30
#define D_OCT 31
#define D_NOV 30
#define D_DEC 31

int get_date_start(int month);
int get_date_range(int month);
void print_month(int month);

int main(void)
{
    int select, month;

    printf("This program prints calendar.\n");

    while (!0) {
        printf("1. Print calendar\n");
        printf("2. Exit\n");
        printf("Enter the menu: ");
        scnaf("%d", &select);

        if (select == 1) {
            printf("Enter the month: ");
            scanf("%d", &month);
            if (month < 1 || month > 12) {
                printf("Wrong month. Try again\n");
            } else {
                print_month(month);
            }
        } else {
            break;
        }
    }
    return 0;
}

int get_date_start(int month)
{
    if (month == 1) {
        return S_JAN;
    } else if (month == 2) {
        return S_FEB;
    } else if (month == 3) {
        return S_MAR;
    } else if (month == 4) {
        return S_APR;
    } else if (month == 5) {
        return S_MAY;
    } else if (month == 6) {
        return S_JUN;
    } else if (month == 7) {
        return S_JUL;
    } else if (month == 8) {
        return S_AUG;
    } else if (month == 9) {
        return S_SEP;
    } else if (month == 10) {
        return S_OCT;
    } else if (month == 11) {
        return S_NOV;
    } else if (month == 12) {
        return S_DEC;
    } else {
        printf("get_start_date(): error in month\n");
        return -1;
    }
}