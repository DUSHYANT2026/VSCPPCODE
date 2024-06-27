
// //  Shortest Job First (SJF):




// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Process {
//     int pid;        
//     int burst_time; 
//     int arrival_time; 
// } Process;

// void swap(Process *a, Process *b) {
//     Process temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void SJF(Process *processes, int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (processes[j].burst_time > processes[j + 1].burst_time) {
//                 swap(&processes[j], &processes[j + 1]);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         printf("Process %d is executing\n", processes[i].pid);
//     }
// }

// int main() {
//     int n; 
//     printf("Enter the number of processes: ");
//     scanf("%d", &n);


//     Process *processes = (Process *)malloc(n * sizeof(Process));
//     for (int i = 0; i < n; i++) {
//         processes[i].pid = i + 1;
//         // Generate burst time (random)
//         processes[i].burst_time = rand() % 10 + 1; 
//         processes[i].arrival_time = rand() % 10;  
//     }

//     SJF(processes, n);

//     free(processes);
//     return 0;
// }















// Priority Scheduling:


// #include <stdio.h>
// #include <stdlib.h>


// typedef struct Process {
//     int pid;        
//     int burst_time; 
//     int priority;   
//     int arrival_time; 
// } Process;


// void swap(Process *a, Process *b) {
//     Process temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void Priority(Process *processes, int n) {
 
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (processes[j].priority > processes[j + 1].priority) {
//                 swap(&processes[j], &processes[j + 1]);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         printf("Process %d is executing\n", processes[i].pid);
 
//     }
// }

// int main() {
//     int n; 
//     printf("Enter the number of processes: ");
//     scanf("%d", &n);


//     Process *processes = (Process *)malloc(n * sizeof(Process));
//     for (int i = 0; i < n; i++) {
//         processes[i].pid = i + 1;
    
//         processes[i].burst_time = rand() % 10 + 1; 
      
//         processes[i].priority = rand() % 100 + 1; 
//         processes[i].arrival_time = rand() % 10;  
//     }


//     Priority(processes, n);

//     free(processes);
//     return 0;
// }






// // First Come, First Served (FCFS):

// #include <stdio.h>
// #include <stdlib.h>


// typedef struct Process {
//     int pid;      
//     int burst_time; 
//     int arrival_time;
// } Process;


// void swap(Process *a, Process *b) {
//     Process temp = *a;
//     *a = *b;
//     *b = temp;
// }


// void FCFS(Process *processes, int n) {

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (processes[j].arrival_time > processes[j + 1].arrival_time) {
//                 swap(&processes[j], &processes[j + 1]);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         printf("Process %d is executing\n", processes[i].pid);

//     }
// }

// int main() {
//     int n; 
//     printf("Enter the number of processes: ");
//     scanf("%d", &n);

   
//     Process *processes = (Process *)malloc(n * sizeof(Process));
//     for (int i = 0; i < n; i++) {
//         processes[i].pid = i + 1;
//         processes[i].burst_time = rand() % 10 + 1; 
//         processes[i].arrival_time = rand() % 10;  
//     }

//     FCFS(processes, n);

//     free(processes);
//     return 0;
// }
