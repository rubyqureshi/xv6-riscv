#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"

int main()
{
  printf(1 , "No. of Process: %d" , getNumProc());
  exit();
}