//
// Created by Virendra Carpenter on 24/07/21.
//

#ifndef FCFS_CPP_PROCESS_H
#define FCFS_CPP_PROCESS_H

#include<iostream>

using namespace std;


class process {
public:
    int process_num;
    int burst_time;
    int arrival_time;
    int response_time;
    int waiting_time;
    int turnaround_time;

    void input_process(int);

    int get_at() {
        return arrival_time;
    }
};


#endif //FCFS_CPP_PROCESS_H
