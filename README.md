# FCFS-CPU-Scheduling
First come first serve (FCFS) scheduling algorithm simply schedules the jobs according to their arrival time. The job which comes first in the ready queue will get the CPU first. The lesser the arrival time of the job, the sooner will the job get the CPU. FCFS scheduling may cause the problem of starvation if the burst time of the first process is the longest among all the jobs.

# Output
![Screenshot](fcfs-output.png)
#Compile 
> Open Terminal 
> Go to the program directory using cd
> then type:
> g++ fcfs.cpp Process.cpp Process.h && ./a.out
