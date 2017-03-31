#include "types.h"
#include "user.h"

int main(int argc, char* argv[])
{
  printf(1, "Should see error in just a second...\n");
  printf(1, "But instead we see code: %p\n", *((int*)0));
  exit();
}
