# Delhi Metro Route Finder

C++ project that models the Delhi Metro network using graphs and tries.  
It supports autocomplete for station names and computes the shortest path between two stations using Dijkstra’s algorithm.

## Features

- **Station autocomplete**  
  Type a prefix (e.g., `KASH`) and get all matching station names, powered by a trie-based prefix search.

- **Shortest path computation**  
  Uses Dijkstra’s algorithm on a weighted graph of stations to find the minimum-time route between any two metro stations.

- **Line change hints**  
  While printing the path, the program also indicates which metro line to use and when to switch lines.

## How It Works

- All metro lines are stored as vectors of station names.
- A trie is built from all station names to support prefix search.
- An undirected weighted graph is built where:
  - Nodes are station names.
  - Edges connect adjacent stations with travel time as weight.
- Dijkstra’s algorithm finds the shortest path and the route is printed station by station, including line transitions.


## Build and Run
g++ -std=c++17 -O2 delhimetrodbcode.cpp -o delhimetrodbcode
./delhimetrodbcode


You will be prompted to:

1. Enter station prefixes to see autocomplete suggestions.
2. Enter a source station name.
3. Enter a destination station name.

The program then prints the optimal route and line changes.

## Example

- Prefix input: `KASH`  
  Output includes: `KASHMERE GATE`

- Source: `SHAHDRA`  
- Destination: `INDERLOK`  
  Output: Sequence of stations from Shahdra to Inderlok with the line name and switches.

## Requirements

- C++17-compatible compiler (e.g., `g++`).
- Standard library only; no platform-specific headers like `conio.h` are required.

## Author

**Vishal Mishra**  
GitHub: [@beyondinfinity9988](https://github.com/beyondinfinity9988)
