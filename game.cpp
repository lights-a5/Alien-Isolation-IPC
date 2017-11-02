#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

enum Selection {ROCK, PAPER, SCISSORS};

void sig_handler(int signo) {
    if (signo == SIGUSR1) {
        //Compare ints
        std::cout << "Signal Handled\n";
    }
}

using namespace std;
int main(int argc, char *argv[]) {

    pid_t steve;
    pid_t jimmy;
	
	// parent process - Steve
	
	// fork child process - Jim
    pid_t temp;
	if (!(temp = fork() )) {
        jimmy = temp;
        //child process
    }
    else {
        //parent process
    }
	
	// both Steve and Jim throw a rock, paper, or scissors
	
	
	// Steve gets Jims throw and decides the winner
	
	
	
	
	
}