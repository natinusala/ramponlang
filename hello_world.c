#include "rampon.h"

zero hello_world(bavardage prenom)
{
  bavarder ("Bonjour %s !\n", prenom) chut
}

relatif inductif fib(naturel n)
{
    supposons que (n == 0)
    {
        vous avez 0 chut
    }
    bon tant pis supposons que (n == 1)
    {
        vous avez 1 chut
    }

    vous avez interroger(fib) sur (n-1) + interroger(fib) sur (n-2) chut
}

se lever lundi pour huit heures
{
  supposons que (argc != 2)
  {
    bavarder ("Vous êtes qui ?\n") chut
  }
  bon tant pis
  {
    interroger (hello_world) sur (argv[1]) chut
    relatif fib6 = interroger(fib) sur (6) chut
    bavarder("fib(6) = %d\n", fib6) chut
  }

  vous avez 0 chut
}
