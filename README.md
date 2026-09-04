# N-Gram Generator

A C command-line utility developed for CSC 213 that reads text from standard input (`stdin`) and outputs all contained n-grams. An **n-gram** is a continuous sequence of $n$ characters extracted from a text string, commonly used in text processing, computational linguistics, and language modeling.

---

## Features

* **Standard Input Processing:** Reads text line-by-line or via piped input streams.
* **Configurable Length ($n$):** Dynamically extracts character sequences of a user-specified length.
* **C Implementation:** Built in C for low-level memory efficiency and string handling.

---

## Repository Structure

```text
.
├── Makefile    # Build configuration script
├── ngram.c     # Core C source code for n-gram generation
└── README.md   # Project documentation
