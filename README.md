# BubblePop

Jeu d'éclatement de bulles développé en **C++** avec le framework **Qt**.
Le joueur doit éclater des bulles pour marquer des points, en évitant les pièges, au fil de niveaux successifs et contre la montre.

![Statut](https://img.shields.io/badge/statut-en%20d%C3%A9veloppement-orange)
![C++](https://img.shields.io/badge/C%2B%2B-17-blue)
![Qt](https://img.shields.io/badge/Qt-Widgets-41cd52)

---

## Sommaire

- [Aperçu](#aperçu)
- [Fonctionnalités](#fonctionnalités)
- [Architecture](#architecture)
- [Prérequis](#prérequis)
- [Compilation et lancement](#compilation-et-lancement)
- [Utilisation](#utilisation)
- [Structure du projet](#structure-du-projet)
- [État d'avancement](#état-davancement)
- [Contribuer](#contribuer)
- [Licence](#licence)

---

## Aperçu

BubblePop repose sur une séparation claire entre le **modèle de jeu** (bulles, score, niveau, chronomètre) et l'**interface** (fenêtre principale, menus, barre d'état). La communication entre ces couches est prévue via le système de **signaux/slots** de Qt.

## Fonctionnalités

**Disponibles**

- Fenêtre principale configurable (titre, dimensions)
- Menu *Fichier* : nouvelle partie (`Ctrl+N`), quitter (`Ctrl+Q`)
- Menu *Settings* : paramètres, tableau des scores
- Barre d'état avec messages temporisés

**Prévues**

- Trois types de bulles : **normales**, **bonus** et **malus**, chacune avec ses points et sa couleur
- Système de niveaux et de score
- Chronomètre de partie
- Écran de fin de partie avec récapitulatif
- Tableau des meilleurs scores
- Écran de crédits

## Architecture

| Composant | Fichiers | Rôle |
|---|---|---|
| **Bulles** | `bubble.h`, `bubble.cpp` | Classe de base `Bubble` (position, rayon, état) et ses spécialisations `NormalBubble`, `BonusBubble`, `MalusBubble` |
| **Modèle de jeu** | `bubblegamemodel.h/.cpp` | Logique de la partie : liste de bulles, score, niveau, minuteur ; émet les signaux `scoreChanged`, `levelReady`, `timeChanged`, `bubbleUpdated`, `gameOver` |
| **Fenêtre principale** | `bubblewindow.h/.cpp` | `QMainWindow` : actions, menus, barre d'outils, barre d'état ; émet les signaux de navigation |
| **Configuration** | `config.h` | Constantes de l'application (espace de noms `AppConfig`) |
| **Point d'entrée** | `main.cpp` | Initialisation de `QApplication` et affichage de la fenêtre |

### Signaux de navigation (`BubbleWindow`)

`newGameRequested()` · `settingsRequested()` · `scoresRequested()` · `quitRequested()` · `creditRequested()`

## Prérequis

- Un compilateur compatible **C++17** (GCC, Clang ou MSVC)
- **Qt 5.15+ ou Qt 6** avec le module *Widgets*
- **Qt Creator** (recommandé) ou CMake / qmake en ligne de commande

## Compilation et lancement

### Avec Qt Creator (recommandé)

1. Ouvrir le fichier de projet (`CMakeLists.txt` ou `.pro`) dans Qt Creator.
2. Sélectionner un kit Qt valide.
3. Compiler et lancer avec `Ctrl+R`.

### En ligne de commande (CMake)

```bash
git clone <url-du-depot>
cd BubblePop
cmake -S . -B build
cmake --build build
./build/BubblePop
```

> Adaptez le nom de l'exécutable et la commande à la configuration de build de votre projet.

## Utilisation

| Action | Raccourci / Menu |
|---|---|
| Nouvelle partie | `Ctrl+N` ou *Fichier → New game* |
| Quitter | `Ctrl+Q` ou *Fichier → Quit* |
| Paramètres | *Settings → Settings* |
| Tableau des scores | *Settings → Score ladder* |

## Structure du projet

```
BubblePop/
├── main.cpp               # Point d'entrée
├── config.h               # Constantes de configuration
├── bubble.h / .cpp        # Bulles (normale, bonus, malus)
├── bubblegamemodel.h/.cpp # Modèle de jeu
├── bubblewindow.h/.cpp    # Fenêtre principale et menus
└── .gitignore
```

## État d'avancement

Le projet est en phase de **mise en place de l'architecture**.

- [x] Fenêtre principale, menus et actions
- [x] Squelette des classes de bulles
- [x] Squelette du modèle de jeu
- [ ] Implémentation des points, couleurs et règles de suppression des bulles
- [ ] Logique de partie (niveaux, score, chronomètre)
- [ ] Vue de jeu (affichage et clic sur les bulles)
- [ ] Boîtes de dialogue : paramètres, scores, crédits
- [ ] Sauvegarde des meilleurs scores
- [ ] Barre d'outils

## Contribuer

Les contributions sont les bienvenues :

1. Forkez le dépôt
2. Créez une branche (`git checkout -b feature/ma-fonctionnalite`)
3. Commitez vos changements (`git commit -m "Ajoute ma fonctionnalité"`)
4. Poussez la branche (`git push origin feature/ma-fonctionnalite`)
5. Ouvrez une *Pull Request*

## Licence
Pas de license, c'est un projet universitaire, donc opensource.