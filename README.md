# Sorting Algorithms in C 🚀

A clean and beginner-friendly collection of fundamental sorting algorithms implemented in **C**. Each program features dynamic memory allocation (`malloc`/`free`) so you can test them with custom input sizes at runtime.

---

## 📂 Included Algorithms

| Algorithm | File Name | Time Complexity (Avg / Worst) | Space Complexity |
| :--- | :--- | :--- | :--- |
| **Bubble Sort** | `bubble_sorting.c` | $O(n^2)$ | $O(1)$ |
| **Selection Sort** | `selection_sorting.c` | $O(n^2)$ | $O(1)$ |
| **Insertion Sort** | `insertion_sorting.c` | $O(n^2)$ | $O(1)$ |
| **Quick Sort** | `quick_sorting.c` | $O(n \log n)$ / $O(n^2)$ | $O(\log n)$ |

---

## 💻 How to Compile and Run

Make sure you have a C compiler installed (such as **GCC**). Open your terminal and follow these steps:

### 1. Clone the repository
```bash
git clone https://github.com/ankurkundu216-del/sorting_algorithms.git
cd sorting_algorithms
```

### 2. Compile any sorting file (e.g., Quick Sort)
```bash
gcc quick_sorting.c -o quick_sort
```

### 3. Run the compiled program
```bash
./quick_sort
```

*(Note: You can replace `quick_sorting.c` with any other file like `bubble_sorting.c`, `selection_sorting.c`, or `insertion_sorting.c`)*

---

## 📜 License

This project is open-source and available under the [MIT License](LICENSE).
