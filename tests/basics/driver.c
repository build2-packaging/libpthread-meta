#include <stdio.h>
#include <pthread.h>

static void*
thread_func (void* r)
{
  *(int*)(r) = 0;
  return NULL;
}

int
main ()
{
  int r = 1;
  pthread_t t;

  if (pthread_create (&t, NULL, &thread_func, &r) != 0)
  {
    fprintf (stderr, "unable to creat thread\n");
    return 1;
  }

  if (pthread_join (t, NULL) != 0)
  {
    fprintf (stderr, "unable to join thread\n");
    return 1;
  }

  return r;
}
