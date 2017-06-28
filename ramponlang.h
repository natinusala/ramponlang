#ifndef RAMPON_H
#define RAMPON_H

#define RAMPON_VERSION 0.1

#include <stdio.h>
#include <stdlib.h>

//Return statement :
//vous avez x
#define vous
#define avez return

//Exit function :
//examen termine x questions repondues
#define examen
#define termine(x) exit(x)
#define questions
#define repondues

//C/C++ interoperability
//C : vacances "C"
//C++ : vacances "C++"
#define vacances extern

//Semicolon :
//chut
#define chut ;

//Void type :
//zero
#define zero void

//Functions call :
//interroger (func) sur (params)
#define interroger(func) func(
#define sur(params) params)

//Main function :
//se lever lundi pour huit heures {...}
#define se
#define lever
#define lundi
#define pour
#define huit
#define heures int main(int argc, char** argv)

//Functions macro :
//bavarder : printf
#define bavarder printf

//Brackets
//{ : vous sortez une feuille
#define vous
#define sortez
#define une
#define feuille {
//} : faites passer les copies
#define faites
#define passer
#define les
#define copies }

//Typedefs :
// bavardage : char*
//naturel : unsigned
//relatif : int
typedef char* bavardage;
typedef unsigned naturel;
typedef int relatif;

//Control blocks :
//If :
//supponsons que (...) {...}
#define supposons
#define que if
//Else / Else if :
//bon tant pis [suppons que (...)] {...}
#define bon
#define tant
#define pis else

//Garbage :
//inductif
#define inductif

#endif
