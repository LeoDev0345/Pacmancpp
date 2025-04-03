# Projet Pacmancpp - Documentation

## Table des matières
1. [Description](#description)
2. [Installation](#installation)
   - [Prérequis](#prérequis)
3. [Fonctionnalités](#fonctionnalités)
   - [Contrôles](#contrôles)
   - [Éléments du jeu](#éléments-du-jeu)
   - [Bonus](#bonus)
4. [Structure du code](#structure-du-code)
5. [Comment jouer](#comment-jouer)
6. [Remarques](#remarques)
7. [Améliorations possibles](#améliorations-possibles)

## Description

Ce projet est une implémentation du jeu classique Pacman en C++ utilisant la bibliothèque SFML. Le joueur contrôle Pacman à travers un labyrinthe, mange des points et évite les fantômes. Le jeu inclut plusieurs fonctionnalités comme la capacité temporaire de manger les fantômes.

## Installation

### Prérequis

- Un compilateur C++ compatible 
- La bibliothèque SFML installée sur votre système

## Fonctionnalités

### Contrôles

- **Flèches directionnelles** : Déplacer Pacman
    
- **Entrée** : Commencer une nouvelle partie
    

### Éléments du jeu

- **Pacman** : Le personnage principal contrôlé par le joueur
    
- **Fantômes** : 4 ennemis (Blinky, Pinky, Inky, Clyde) avec des comportements différents
    
- **Points** : Donnent 100 points lorsqu'ils sont mangés
    
- **Super Points** (cercles plus grands) :
    
    - Donnent 200 points
        
    - Rend les fantômes vulnérables pendant un temps limité

## Structure du code

### Fichiers principaux

|Fichier|Description|
|---|---|
|`PacShow.cpp`|Point d'entrée du programme|
|`starter.h`|Classe principale gérant la logique du jeu|
|`pac.h`|Classe pour Pacman|
|`ghost.h`|Classe pour les fantômes|
|`maze.h`|Gestion du labyrinthe|
|`gameSound.h`|Gestion des effets sonores|
|`gameText.h`|Affichage du texte à l'écran|
|`fruit.h`|Gestion des fruits bonus|
|`cntrgame.h`|Classe de base pour les éléments du jeu|
|`targetCalc.h`|Calcul des déplacements des fantômes|

## Comment jouer

1. Lancez le jeu avec l'exécutable
    
2. Appuyez sur Entrée pour commencer
    
3. Utilisez les flèches pour déplacer Pacman
    
4. Mangez tous les points pour passer au niveau suivant
    
5. Évitez les fantômes ou mangez-les lorsqu'ils sont vulnérables (bleus)
    
6. Le jeu se termine quand vous n'avez plus de vies
    

## Remarques

- Les ressources graphiques et sonores doivent être placées dans les dossiers :
    
    - `texture/` pour les images
        
    - `sound/` pour les effets sonores
        
- La police doit être placée dans le dossier `font/` 

