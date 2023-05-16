#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main()
{
    pid_t pid;

    pid = fork();

    if (pid < 0) 
    {
        cout << "fork failed" << endl;
        return 1;
    }
    else if (pid == 0)
    {
        //子进程
        cout << pid << endl;
        cout<<"son"<<endl;
    }
    else
    {
        //父进程
        wait(NULL);
        cout << pid << endl;
        cout<<"father"<<endl;
    }
    return 0;
    
}