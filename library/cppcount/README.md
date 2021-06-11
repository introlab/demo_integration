# cppcount

Bibliothèque C++ de démonstration. Cette librairie compte les occurences de chaque caractère dans une chaîne de caractère et retourne dans un dictionnaire.

Nous utilisons:

* [pybind11](https://github.com/pybind/pybind11), pour la création de bindings Python pour la librairie C++
* [googletest](https://github.com/google/googletest), pour les tests unitaires
* [CMake](https://cmake.org) pour la gestion de la compilation

## Requis

### Installation des dépendances système

```bash
# MAJ des paquets systèmes 
sudo apt-get update
# Instllation des dépendances
sudo apt-get install ninja-build cmake build-essential python3
```

### Sous-modules

> Les sous-modules de ce projet doivent être installés avant de pouvoir compiler cette bibliothèque.

Les sous-modules peuvent être obtenus avec les commandes suivantes:

```bash
# Initialisation des sous-modules
git submodule init
# MAJ de tous les sous-modules récursivement
git submodule update --recursive
```

## Compilation de la librairie C++

À partir du répertoire courant (library/cppcount):

```bash
# Création du répertoire build
mkdir build
# Aller dans le répertoire build
cd build
# Executer cmake
cmake ..
# Compilation
make 
```

## Compilation de la librairie Python (bindings)

```bash
# Assurez-vous d'être dans le répertoire library/cppcount avant d'exécuter ces commandes
python3 -m pip install --upgrade pip
python3 -m pip install --upgrade build
# Ceci va exécuter ce qu'il y a dans setup.py
python3 -m build
```

## Exécution des tests de la librairie C++

```bash
# Assurez-vous d'être dans le répertoire library/cppcount/build/cppcount/tests
# Exécution des tests
./test_cppcount
```

Vous devriez avoir un résultat qui ressemble à :

```text
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from charactersTests
[ RUN      ] charactersTests.countCharacters
[       OK ] charactersTests.countCharacters (0 ms)
[----------] 1 test from charactersTests (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
```
