# benchmarks

Dans le but de comparer les performances des implémentations de nos bibliothèques C++ et Python, nous souhaitons exécuter des tests de performances sur le fichier [input.txt](input.txt) qui contient une longue chaîne de caractère aléatoire. Nous pourrons ainsi constater quelle implémentation est la plus efficace.

## Requis

### Installation des dépendances système

```bash
# MAJ des paquets systèmes 
sudo apt-get update
# Instllation des dépendances
sudo apt-get install ninja-build cmake build-essential python3 python3-venv
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

## Compilation du benchmark de la bibliothèque C++

À partir du répertoire courant (library/benchmarks):

```bash
# Création du répertoire build
mkdir build
# Aller dans le répertoire build
cd build
# Executer cmake
cmake ..
# Compilation du benchmark C++
make 
```

## Création des environnements (venv) pour les benchmarks Python

Dans le répertoire library/benchmarks:

```bash
# Creation de la venv pour pycount
python3 -m venv venv-pycount
# Création de la venv pour cppcount-pybind11 (bindings)
python3 -m venv venv-cppcount-pybind11
```

## Exécution du benchmark pour bibliothèque C++

Dans le répertoire library/benchmarks/build:

```bash
    ./benchmark_cppcount
```

L'exécution devrait vous donner une sortie similaire à ceci qui représente le temps de traitement du fichier input.txt :

```text
benchmarkCountCharacters: 0.0216991 s
```

## Exécution du benchmark pour bibliothèque pycount

Dans le répertoire library/benchmarks

```bash
# Installation pour pycount
source . /venv-pycount/bin/activate
python3 -m pip install ../pycount 
# Exécuter le benchmark
python3 ./benchmark_pycount.py
```

L'exécution devrait vous donner une sortie similaire à ceci qui représente le temps de traitement du fichier input.txt :

```text
benchmark_count_characters: 0.1936646032333374 s
```

## Exécution du benchmark pour bibliothèque cppcount-pybind11

Dans le répertoire library/benchmarks:

```bash
# Installation pour pycount
source ./venv-cppcount-pybind11/bin/activate
python3 -m pip install ../cppcount 
# Exécuter le benchmark
python3 ./benchmark_cppcount_pybind11.py
```

L'exécution devrait vous donner une sortie similaire à ceci qui représente le temps de traitement du fichier input.txt :

```text
benchmark_count_characters: 0.024656734466552734 s
```
