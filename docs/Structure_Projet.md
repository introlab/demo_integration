# Structure des projets

Un nouveau projet doit minimalement contenir :

1. Un fichier [README.md](../README.md) principal qui décrit le projet et qui contient :
   1. Les auteurs du projet et leurs coordonnées (GitHub)
   2. Une description courte
   3. Un lien vers:
      1. Les instructions de compilation
      2. Les instructions d'installation
      3. Les exemples d'utilisation
      4. La documentation
   4. Les publications importantes
      1. Site Web
      2. Articles scientifiques
      3. Vidéos YouTube
   5. Un logo du laboratoire et lien Internet dans les remerciements
2. Un fichier [LICENSE](../LICENSE) qui mentionne clairement la license des fichiers sources.
   1. Ex: GPLv3, BSD 3 clauses, etc.
3. Une description sommaire pour facilier la recherche
4. Les mots clés du projet
5. (Au besoin) les ["workflows"](../.github/workflows) pour l'intégration continue
6. Une organisation adéquate des répertoires (selon le type projet) et une explication de l'organisation.

## Projets C/C++

* Utilisation de CMake comme "build system"
* Style de code uniforme. Ex: [Google](https://google.github.io/styleguide/cppguide.html)
* Utilisation des standards modernes C++11/14/20

## Projets Python

* Conformité au style [PEP 8](https://www.python.org/dev/peps/pep-0008/)
