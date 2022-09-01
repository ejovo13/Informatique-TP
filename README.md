# TRAVAUX PRATIQUES
[![Coverage Status](https://coveralls.io/repos/github/ejovo13/Informatique-TP/badge.svg?branch=master)](https://coveralls.io/github/ejovo13/Informatique-TP?branch=master)

![example workflow](https://github.com/ejovo13/Informatique-TP/actions/workflows/Mac.yml/badge.svg)
![example workflow](https://github.com/ejovo13/Informatique-TP/actions/workflows/Ubuntu.yml/badge.svg)


# TP

This repository contains my C solutions to the Travaux Pratiques of my first year programming course. In total, there were 6 sets of homework problems that culminated in a final project writing a simple AI for a robot on wheels.

The solutions for the TPs are found in the `src` directory, unfortunately I cannot post the questions as that would probably be a violation of copyright.

### Building

This project is built with CMake. First, clone the repository
```
git clone git@github.com:ejovo13/Informatique-TP.git
git clone https://github.com/ejovo13/Informatique-TP.git
```

Next, create a `build` directory and move to it
```
mkdir build && cd ./build
```

Configure CMake with
```
cmake ../
```
and then build the project.
```
cmake --build ./
```


### Submodules

This repository has [https://github.com/ejovo13/libejovo/tree/a06a7b7abeddf38e0ff65df2c429170b7fc22eac](libejovo) as a dependency, linked to this repository using git's submodules feature.
