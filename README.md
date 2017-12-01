# ramponlang
## A Mr. Rampon inspired "programming language"

Full language rules and specification are in the wiki : https://github.com/natinusala/ramponlang/wiki/ramponlang-specifications

## Hello World

This snippet prints your name and the value of `fibonnaci(6)` :

```
definissons copie vide hello_world(posons bavardage nom et bavardage prenom) vous sortez une feuille
  bavarder ("Bonjour %s %s !\n", prenom, nom) chut
faites passer les copies

definissons relatif inductif fib(posons naturel n) vous sortez une feuille
    supposons que (n == 0) vous sortez une feuille
        vous avez 0 chut
    faites passer les copies
    bon tant pis supposons que (n == 1) vous sortez une feuille
        vous avez 1 chut
    faites passer les copies

    vous avez interroger(fib) sur (n-1) + interroger(fib) sur (n-2) chut
faites passer les copies

se lever lundi pour huit heures vous sortez une feuille
  supposons que (argc != 3) vous sortez une feuille
    bavarder ("Vous êtes qui ?\n") chut
  faites passer les copies
  bon tant pis vous sortez une feuille
    interroger (hello_world) sur (argv[1] et argv[2]) chut

    pour tout relatif fib6 = interroger(fib) sur (6) chut

    bavarder("fib(6) = %d\n", fib6) chut
  faites passer les copies

  vous avez 0 chut
faites passer les copies
```

## How to use

Create a `.ramponette` file and compile it with : `ramponc [ramponette] [compiler options]`. The `ramponnade` file is required for `ramponc` to work, make sure that it is available.

## `ramponc` requirements
 - `g++` compiler installed
 - `/bin/sh` available
