# 04 — Data Types and Challenges (C++)

---

## Data Type in C++

- In C++:
  - `4` and `4.0` are **different**
    - `4` → int
    - `4.0` → double/float

---

## Types of Data Types

- **Primitive**
- **Derived**
- **User-defined**

---

## Primitive Data Types

- Meaning:
  - Basic types directly supported in memory

- Types:
  - `int`
  - `float` → stores ~7 precision
  - `double` → stores ~15–17 precision
  - `bool` → true / false
  - `void` → nothing (empty)

- Note:
  - `void` ≠ `0`
  - `0` is also a value

---

## Derived Data Types

- Made from primitive types

- Types:
  - array
  - function
  - pointer
  - reference

---

## User-Defined Data Types

- Based on requirement

- Types:
  - structure
  - union
  - enum
  - class
  - typedef

---

## Bool Behavior

```cpp id="y9xg7c"
bool isReady = 5;
cout << isReady; // output: 1
```

- Any positive value → `1` (true)
- `0` → false

---

## Signed vs Unsigned

- **Signed**
  - Can store:
    - positive
    - negative

- **Unsigned**
  - Only:
    - positive values

---

## Garbage Value

- If we declare variable but don’t assign:

```cpp id="b4f9az"
int x;
cout << x; // garbage value
```

- Output can be **anything**

---

## Size & Precision

- C++ is memory precise:
  - 8 bit, 16 bit, 32 bit, 64 bit

- Types:
  - `short`
  - `long`
  - `long long`

---

### Long Precision (Important)

- `long` / `long long` used for:
  - **large integer values**

- `double` is for:
  - **floating precision**, not same as `long`

---

## Type Conversion

- **Explicit**
  - Done by programmer

```cpp id="d2a8ft"
int x = (int)4.5;
```

- **Implicit**
  - Done by compiler automatically

---

### Precision Importance

- **Important**
  - Money calculation
  - Scientific calculation
  - Large data values

- **Not very important**
  - Simple counting
  - Flags (true/false)
  - Basic loops

---

## Strings

- To use string:

```cpp id="z5o7m1"
#include <string>
```

---

## Escape Sequences

- Used inside string

```cpp id="8m1g2r"
string description = "known as \"best\" tea";
cout << description << endl;
```

---

### Important Escape Examples

```cpp id="k7r1xm"
cout << "Hello\nWorld";   // new line
cout << "Tab\tSpace";     // tab
cout << "Quote: \"Hi\"";  // double quote
cout << "Backslash \\";   // backslash
```

---

## Input from User

### Problem with `cin`

- `cin` leaves newline in buffer
- Causes issue with `getline()`

---

### Solution: `cin.ignore()`

```cpp id="9s6p3n"
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int num;

  cout << "enter a number: ";
  cin >> num;

  cin.ignore(); // clears leftover newline

  string name;
  cout << "enter your name : ";
  getline(cin, name);

  cout << name;

  return 0;
}
```

---

### What `getline()` does

- Takes full line input
- Including spaces

---

## Code Examples

---

### Example 1

```cpp id="2c5m9q"
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  string favourite = "Lemon Tea";
  cout << favourite << endl;

  string desription = "know as \"best\" tea ";
  cout << desription << endl;

  return 0;
}
```

---

### Example 2

```cpp id="p4x8q1"
#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned int smallpack = 100;
  cout << smallpack << endl;

  smallpack = 200;
  cout << smallpack << endl;

  long large = 1000000;
  cout << large << endl;

  float teaprice = 49.9999;
  int roundedprice = (int)teaprice;
  cout << roundedprice << endl;

  return 0;
}
```

---

### Example 3

```cpp id="t7v2mz"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int tealeves = 50;
  float temp_water = 85.5;
  double priceOfTea = 299.99;
  char teaGrade = 'A';

  cout << teaGrade << endl;

  bool isgasready = 5;
  cout << isgasready << endl;

  // positive → 1, zero → 0

  teaGrade = 'B'; // corrected (single char)
  cout << teaGrade << endl;

  return 0;
}
```

---
