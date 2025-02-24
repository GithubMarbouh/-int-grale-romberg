# Méthode de Romberg

Ce projet implémente la méthode de Romberg pour l'intégration numérique. La méthode de Romberg est une technique sophistiquée qui améliore la précision de l'intégration numérique en utilisant l'extrapolation de Richardson.

## Description

La méthode de Romberg combine la méthode des trapèzes avec l'extrapolation de Richardson pour obtenir une meilleure approximation de l'intégrale définie d'une fonction. Elle est particulièrement efficace pour les fonctions suffisamment différentiables.

## Contenu du Projet

- `romberg_program.c` : Programme principal implémentant la méthode de Romberg
- Autres fichiers de support (le cas échéant)

## Compilation et Exécution

Pour compiler le programme :
```bash
gcc romberg_program.c -o romberg
```

Pour exécuter le programme :
```bash
./romberg
```

## Fonctionnalités

- Calcul d'intégrales définies avec la méthode de Romberg
- Amélioration progressive de la précision
- Affichage du tableau de Romberg

