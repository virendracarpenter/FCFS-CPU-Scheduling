#include "Process.h"

#define MAX_PROCESS 10

void calc_wait_tat(process *, int);

void average(process *, int);

void display(process *, int);

int main() {
    process p[MAX_PROCESS], temp;
    int num, i, j;
    cout << "ENTER NUMBER OF PROCESSES : ";
    cin >> num;
    //input
    for (i = 0; i < num; ++i)
        p[i].input_process(i);

    //bubble sort
    for (i = 0; i < num; ++i) {
        for (j = i + 1; j < num; ++j) {
            if (p[i].get_at() > p[j].get_at()) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    calc_wait_tat(p, num);
    display(p, num);
    return 0;
}