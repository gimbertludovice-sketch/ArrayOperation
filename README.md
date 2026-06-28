# 📦 Array Operations in C

A simple C console program that performs **Insertion** and **Deletion** operations on an integer array — built for learning fundamental array manipulation in C.

---

## 📋 Features

- Input a custom-sized array (up to 100 elements)
- Display the original array
- **Insert** an element at any valid position
- **Delete** an element from any valid position
- Input validation for out-of-bounds positions

---

## 🖥️ Program Output Example

```
Enter array size: 6
Enter array elements:
Element 0: 10
Element 1: 20
Element 2: 30
Element 3: 40
Element 4: 50
Element 5: 60

Original Array: 10 20 30 40 50 60

--- Insertion Operation ---
Enter position to insert: 2
Enter value to insert: 28
Array after insertion: 10 20 28 30 40 50 60

--- Deletion Operation ---
Enter position to delete: 3
Array after deletion: 10 20 28 40 50 60
```

---

## 🚀 How to Run

### Option 1 — Visual Studio

1. Open Visual Studio
2. Create a new **Empty Project (C++)**
3. Add `array_operations.c` to **Source Files**
4. Press `Ctrl + F5` to build and run

### Option 2 — VS Code + GCC

1. Install [MSYS2](https://www.msys2.org/) and GCC:
   ```bash
   pacman -S mingw-w64-x86_64-gcc
   ```
2. Add `C:\msys64\mingw64\bin` to your Windows PATH
3. Install the **C/C++** extension in VS Code
4. Open the project folder in VS Code
5. Open the terminal (`Ctrl + \``) and run:
   ```bash
   gcc array_operations.c -o array_operations
   ./array_operations
   ```

### Option 3 — Online (No Installation)

Paste the code into any online C compiler:
- [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)
- [Programiz](https://www.programiz.com/c-programming/online-compiler/)
- [Replit](https://replit.com/)

---

## 📁 Project Structure

```
ArrayOperation/
├── array_operations.c   # Main source file
└── README.md            # Project documentation
```

---

## 🧠 Concepts Used

| Concept | Description |
|---|---|
| Arrays | Fixed-size integer array with max 100 elements |
| Insertion | Shifts elements right and inserts at target index |
| Deletion | Shifts elements left to overwrite deleted index |
| Input Validation | Checks for out-of-bounds positions |
| Functions | Reusable `displayArray()` helper |

---

## 📌 Notes

- Array index starts at **0**
- Maximum array size is **100** (defined by `MAX_SIZE`)
- Both insertion and deletion run in a **single execution** of the program

---

## 👨‍💻 Author

**Gimbert Ludovice**  
Course: *BSIT S/Mobile and Website Dev / C Programming*
