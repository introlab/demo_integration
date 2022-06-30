# cppcount

Bibliothèque C++ de démonstration. Cette bibliothèque compte les occurences de chaque caractère dans une chaîne de caractère et retourne le résultat dans un dictionnaire.

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

## Compilation de la bibliothèque C++

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

## Compilation de la bibliothèque Python (bindings)

```bash
# Assurez-vous d'être dans le répertoire library/cppcount avant d'exécuter ces commandes
python3 -m pip install --upgrade pip
python3 -m pip install --upgrade build
# Ceci va exécuter ce qu'il y a dans setup.py
python3 -m build
```

## Exécution des tests de la bibliothèque C++

```bash
# Assurez-vous d'être dans le répertoire library/cppcount/build/cppcount/tests
# Exécution des tests
./test_cppcount
```

Vous devriez avoir un résultat qui ressemble à ceci:

```text
[==========] Running 5 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 2 tests from charactersTests
[ RUN      ] charactersTests.countCharacters
[       OK ] charactersTests.countCharacters (0 ms)
[ RUN      ] charactersTests.countCharactersIgnoreCase
[       OK ] charactersTests.countCharactersIgnoreCase (0 ms)
[----------] 2 tests from charactersTests (0 ms total)

[----------] 3 tests from valuesTests
[ RUN      ] valuesTests.countValues
[       OK ] valuesTests.countValues (0 ms)
[ RUN      ] valuesTests.countValuesWithMapInt
[       OK ] valuesTests.countValuesWithMapInt (0 ms)
[ RUN      ] valuesTests.countValuesWithMapString
[       OK ] valuesTests.countValuesWithMapString (0 ms)
[----------] 3 tests from valuesTests (0 ms total)

[----------] Global test environment tear-down
[==========] 5 tests from 2 test suites ran. (0 ms total)
[  PASSED  ] 5 tests.

```
