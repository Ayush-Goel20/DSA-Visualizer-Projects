# 🚀 DSA Visualizer & Logic Projects

A professional-grade portfolio of Data Structures and Algorithms implemented in C++. This repository showcases optimized solutions to real-world problems, focusing on algorithmic efficiency, clean directory structures, and detailed complexity analysis.

---

## 📂 Project Structure

The repository follows a modular architecture to separate core logic from technical documentation:

```text
DSA-Visualizer-Projects/
├── docs/                   # Technical Logic & Complexity Analysis
│   ├── graphs.md           # Dijkstra’s Algorithm & Graph Theory
│   ├── trees.md            # Huffman Coding & Binary Trees
│   └── linked_lists.md     # Memory Management & Linear Structures
├── src/                    # Source Code (Modular)
│   ├── huffman_encoder/    # Text Compression Engine
│   ├── metro_navigator/    # Shortest Path Finder
│   └── transaction_manager/# Fintech Data Handler
├── .gitignore              # Build artifact exclusions
└── README.md               # Project Landing Page
```
## 🛠️ Featured Implementations

### 1. Metro Navigator (Graph Theory)
**Core Logic:** Dijkstra's Shortest Path Algorithm.

* **Problem:** Finding the most efficient route between metro stations.
* **Key Tech:** Adjacency Lists, Priority Queues (Min-Heaps).
* **Complexity:** O(E log V) Time.

### 2. Huffman Encoder (Greedy Algorithms)
**Core Logic:** Lossless Data Compression.

* **Problem:** Reducing file size by encoding characters based on frequency.
* **Key Tech:** Binary Trees, Frequency Mapping (Hash Maps).
* **Complexity:** O(N log K) Time.

### 3. Transaction Manager (Linear Structures)
**Core Logic:** Dynamic Data Management.

* **Problem:** Handling high-frequency financial logs with O(1) insertion.
* **Key Tech:** Singly Linked Lists, Pointer Manipulation.
* **Complexity:** O(1) Insertion, O(N) Traversal.

---

## 🚀 Getting Started

### Prerequisites
* A C++ compiler (GCC/G++ recommended).
* Git installed on your system.

### Installation & Execution
1.  **Clone the Repo:**
    \`\`\`powershell
    git clone https://github.com/Ayush-Goel20/DSA-Visualizer-Projects.git
    cd DSA-Visualizer-Projects
    \`\`\`
2.  **Compile a Project:**
    \`\`\`powershell
    g++ src/metro_navigator/main.cpp -o metro_nav
    \`\`\`
3.  **Run the Output:**
    \`\`\`powershell
    ./metro_nav
    \`\`\`

---
