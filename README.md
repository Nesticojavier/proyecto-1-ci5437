# proyecto-1-ci5437
Repositorio remeto para almacenar y trabajar en el proyecto 1 de Inteligencia Artificial (ci5437) de la Universidad Simón Bolívar.

## Objetivos
TODO

## Estructura del proyecto
```
.
├── Hanoi
│   ├── Hanoi4-12
│   │   ├── Makefile
│   │   └── hanoi4-12.psvn
│   ├── Hanoi4-14
│   │   ├── Makefile
│   │   └── hanoi4-14.psvn
│   └── Hanoi4-18
│       ├── Makefile
│       └── hanoi4-18.psvn
├── Makefile
├── N-puzzle
│   ├── 15-puzzle
│   │   ├── Makefile
│   │   └── puzzle15.psvn
│   └── 24-puzzle
│       ├── Makefile
│       └── puzzle24.psvn
├── RubiksCube
│   ├── Makefile
│   └── rubik3Sticker.psvn
├── TopSpins
│   ├── TopSpin_12-4
│   │   ├── Makefile
│   │   └── topSpin12-4.psvn
│   ├── TopSpin_14-4
│   │   ├── Makefile
│   │   └── topSpin14-4.psvn
│   └── TopSpin_17-4
│       ├── Makefile
│       └── topSpin17-4.psvn
├── bin
│   ├── psvn2c
│   └── ...
├── generators
│   ├── N-puzzle.cpp
│   └── ...
├── global
│   ├── succ.c
│   └── ...
└── src
    ├── abstractor.cpp
    └── ...
```
- El directorio [bin](./bin) contiene el compilador de psvn (psvn2c).
- El directorio [generators](./generators) contiene los generadores usados para generar los espcios de estado correspondientes a cada problema.
