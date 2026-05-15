# 02 — Going In Depth of Hello World (C++)

---

## How OS Executes a C++ File

- Standard:
  - Execution starts from **`main()` function**
  - When `main()` ends → program ends

---

## Preprocessor

- `#` is used for **preprocessor**

- `#include`
  - Used to **include libraries**

```cpp
#include <iostream>
```

- `iostream`:
  - Handles **input and output**

---

## Compilation Process

- Compiler steps:
  - Checks **syntax**
  - Breaks code into **tokens**
    - Keywords like:
      - `main`
      - `iostream`

- Then:
  - Converts code into **machine executable form**

---

## What is Namespace

- Namespace is an **area (scope) of functions/variables**

- Helps to:
  - Differentiate same name functions
  - Example:
    - User-defined vs library functions

---

## Using Namespace

We can use namespace in 3 ways:

```cpp
std::cout;
```

```cpp
using namespace std;
```

```cpp
using std::cout;
```

---

## Custom Namespace

- We can create our own namespace

---

## Function (Method)

- Method is also called **function**

- Every function must have:
  - **Return type**
  - **Function name**

---

## Return in C++

- We can return different types:
  - int
  - char
  - etc

- Example:

```cpp
return 0;
```

- Meaning:
  - Program executed successfully

---
