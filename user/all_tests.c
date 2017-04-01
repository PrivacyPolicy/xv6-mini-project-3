#include "types.h"
#include "user.h"

/*int
main (int argc, char* argv[])
{
  int ppid = getpid();

  int pid = fork();
  if (pid < 0) {
    printf(1, "TEST FAILED\n");
    exit();
  }
  else if (pid == 0) {
    uint* nullp = (uint*)0;
    printf(1, "null dereference: ");
    printf(1, "%x %x\n", nullp, *nullp);
    // this process should be killed
    printf(1, "TEEST FAILED\n");
    kill(ppid);
    exit();
  }
  else {
    wait();
    printf(1, "TEST PASSED\n");
    exit();
  }
}*/



/*int
main(int argc, char* argv[])
{
  int ppid = getpid();

  int pid = fork();
  if (pid < 0) {
    printf(1, "TEST FAILED\n");
    exit();
  }
  else if (pid == 0) {
    uint* badp = (uint*)4095;
    printf(1, "bad dereference (0x0fff): ");
    printf(1, "%x %x\n", badp, *badp);
    // this process should be killed
    printf(1, "TEST FAILED\n");
    kill(ppid);
    exit();
  }
  else {
    wait();
  }
}*/


//#include <assert.h>
void assert(uint condition)
{
  if (!condition) printf(1, "Failed a test! IGNORE ANYTHING ELSE\n");
}

#include "fcntl.h"

/*int main(int argc, char* argv[])
{
  char *arg;
  
  int fd = open("tmp", O_WRONLY|O_CREATE);
  assert(fd != -1);
  
  // at zero
  arg = (char*) 0x0;
  assert(write(fd, arg, 10) == -1);
  
  // within null page
  arg = (char*) 0x400;
  assert(write(fd, arg, 1024) == -1);

  // spanning null page and code
  arg = (char*) 0xfff;
  assert(write(fd, arg, 2) == -1);

  printf(1, "TEST PASSED\n");
  exit();
}*/


void test_failed()
{
  printf(1, "THE DARN TEST FAILED AGAIN DIDN'T IT??\n");
}

void test_passed()
{
  printf(1, "THE DARN THING... PASSED!!!!! YAY!!!\n");
}


/*int main (int argc, char* argv[])
{
  void *ptr;
  ptr = shmem_access(-1);
  if (ptr != NULL) {
    test_failed();
  }

  ptr = shmem_access(-100);
  if (ptr != NULL) {
    test_failed();
  }
  
  ptr = shmem_access(4);
  if (ptr != NULL) {
    test_failed();
  }

  ptr = shmem_access(100);
  if (ptr != NULL) {
    test_failed();
  }
  
  test_passed();
  exit();
}*/
