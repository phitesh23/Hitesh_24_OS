#include <iostream>
using namespace std;
void findWaitingTime(int processes[], int n, int bt[], int wt[])
{ 
    wt[0] = 0;
    for (int i = 1; i<n ; i++)
    { 
        wt[i] = bt[i-1] + wt[i-1];
    }
}
void findTurnaroundTime(int processes[], int n,int bt[], int wt[], int tat[])
 {
     for (int i = 0; i<n; i++)
     { 
         tat[i] = bt[i] + wt[i];
     }
 }
    
void findAverageTime( int processes[], int n, int bt[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    
    findWaitingTime(processes, n, bt, wt);
    
    findTurnaroundTime(processes, n, bt, wt, tat);
    
    cout<<"Processes" << "burst time" << "waiting time" << "Turn around Time";
    
    for (int i = 0; i<n; i++)
    { 
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        
        cout << " "<<i+1 <<"\t\t" << bt[i] << "\t  "<< wt[i] << "\t\t "<< tat[i];
    
}
}
int main()
{
    int processes[] = {1,2,3,4};
    int n = sizeof processes / sizeof processes[0];
    
    int burst_time[] = {21,3,6,2};
    
    findAverageTime(processes , n , burst_time);
    
    return 0;
}
