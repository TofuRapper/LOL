# Minion Killer

A League of Legends–themed 2D action game written in C with Allegro 5.

**▶ Play in the browser: https://tofurapper.github.io/LOL/**

## Controls

<kbd>Enter</kbd> start / confirm · <kbd>A</kbd> <kbd>D</kbd> move · <kbd>Space</kbd> attack · <kbd>W</kbd> teleport · <kbd>P</kbd> pause · <kbd>Space</kbd> on the title screen for the tutorial

## Building

- **Desktop:** `make release` (see `makefile`; Windows expects Allegro at `../allegro`).
- **Browser:** `web/build.sh` compiles the game and Allegro 5 (SDL2 backend) to WebAssembly with Emscripten into `web/dist/`. The first run downloads emsdk, Allegro and minimp3 (~1 GB).
