# Quick Sort in C++

## 📌 Overview

This C++ program demonstrates the **Quick Sort** algorithm, a highly efficient, divide-and-conquer sorting method:

1. Selects a **pivot** element from the array.
2. Partitions the array so that all smaller elements come before the pivot and all larger elements come after it.
3. Recursively applies the same process to the subarrays on either side of the pivot.

It displays the array before and after sorting to help visualize how quick sort organizes the elements.

---

## 🔧 Features

- **Divide and Conquer**: Splits and sorts subarrays around a pivot for high performance.
- **In-Place Sorting**: Does not require extra arrays, reducing memory use.
- **Efficient Performance**: Average time complexity of _O(n log n)_.
- **Fully Commented Code**: Each step is clearly explained for easy learning and modification.

---

## 📋 Example Run

**Input:**  
Original array:  
10 7 8 9 1 5

**Output:**  
Sorted array:  
1 5 7 8 9 10

---

## ⚙ How It Works

1. **Choose a Pivot**

   - Usually the last element in the array is chosen as the pivot.

2. **Partition the Array**

   - Move all elements smaller than or equal to the pivot to the left, and all greater elements to the right.

3. **Recursively Sort Subarrays**

   - Repeat the process for the subarrays on the left and right of the pivot.

4. **Combine Results**

   - Once all subarrays are sorted, the entire array becomes sorted.

---

## 🛠 How to Run

### You can run this code in two ways:

### 1️⃣ Using a local C++ compiler

- Save the code as `quick_sort.cpp` or any name you prefer.
- Compile and run it with your C++ compiler (e.g., Dev-C++, Code::Blocks, Visual Studio, g++):
