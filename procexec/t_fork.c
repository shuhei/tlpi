// Chapter 24
#include "tlpi_hdr.h"

static int idata = 111;

int main(int argc, char *argv[]) {
  int istack = 222;
  pid_t childPid;

  switch (childPid = fork()) {
  case -1:
    // fork() failed.
    errExit("fork");
  case 0:
    // Child of successfull fork() comes here.
    idata *= 3;
    istack *= 3;
    break;
  default:
    // Parent comes here after successfull fork().
    sleep(3); // Give child a chance to execute.
    break;
  }

  // Both parent and child come here.
  printf("PID=%ld %s idata=%d istack=%d\n", (long)getpid(),
         (childPid == 0) ? "(child) " : "(parent)", idata, istack);
  exit(EXIT_SUCCESS);
}
