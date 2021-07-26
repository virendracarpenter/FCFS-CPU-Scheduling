//
// Created by Virendra Carpenter on 24/07/21.
//

#include "Process.h"

void process::input_process(int count) {
    process_num = count + 1;
    cout << "\nENTER BURST TIME FOR PROCESS " << count + 1 << " : ";
    cin >> burst_time;
    cout << "ENTER ARRIVAL TIME FOR PROCESS " << count + 1 << " : ";
    cin >> arrival_time;
}

//functions
void calc_wait_tat(process *p, int n) {
    int i;
    p[0].response_time = 0;
    for (i = 1; i < n; ++i) {
        p[i].response_time = p[i - 1].burst_time + p[i - 1].response_time;
        if (p[i].response_time < p[i].arrival_time)
            p[i].response_time = p[i].arrival_time;
    }
    p[0].waiting_time = 0;
    for (i = 1; i < n; ++i)
        p[i].waiting_time = p[i].response_time - p[i].arrival_time;
    for (i = 0; i < n; ++i)
        p[i].turnaround_time = p[i].waiting_time + p[i].burst_time;
}

void average(process *p, int n) {
    float avg_wt = 0, avg_tat = 0;
    for (int i = 0; i < n; ++i) {
        avg_wt += (float) p[i].waiting_time;
        avg_tat += (float) p[i].turnaround_time;
    }
    avg_wt /= n;
    avg_tat /= n;
    cout << "\n\nAVERAGE WAITING TIME : " << avg_wt;
    cout << "\nAVERAGE TURN AROUND TIME : " << avg_tat << endl;
}

void display(process *p, int n) {
    cout << "Processes " << "  Burst time  " << " Waiting time  " << " Turn around time\n";
    for (int i = 0; i < n; i++) {
        cout << "\n   " << p[i].process_num << "\t\t" << p[i].burst_time << "\t     " << p[i].waiting_time
             << "\t\t      " << p[i].turnaround_time;
    }
    average(p, n);
}
