# Mosabeghe — Tortoise & Hare Race

A console simulation of the classic tortoise-and-hare race, written in C++ with a small object-oriented design. Both racers move along a 70-position track with randomized move patterns, and the track is printed after every round until one of them reaches the finish line.

## How It Works

- `Race` — runs the round loop, prints the track (`T` = tortoise, `H` = hare, `X` = both on the same cell) and announces the winner
- `Tortoise` — randomized moves each round
- `Hare` — randomized moves each round

## Build & Run

```bash
g++ -std=c++17 -O2 -o mosabeghe main.cpp Race.cpp Tortoise.cpp Hare.cpp
./mosabeghe
```

## Concepts Demonstrated

Random number generation, class collaboration, loop-driven simulation, arrays.
