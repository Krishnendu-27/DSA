# Lecture-04: Write Your First Java Program

---

## Latest Way to Write Java Program

---

## What is Method / Function?

- It is like a **factory**
  - Does the **same type of task again and again**

---

## Code Block

- Curly brackets `{ }` are called:
  - **Block of code**

---

## Return Types

- Every function can return something:
  - Character → `char`
  - String → `String`
  - Number → `int`

- If nothing is returned:
  - Use `void`

---

## Function Structure

```java id="m8c9lp"
return_type function_name() {
  // code
}
```

---

## Example (Simple)

```java id="k8q2xv"
void main() {
  System.out.println("hallow");
}
```

---

## Why `main()`?

- Because:
  - It is the **entry point of the program**
  - Execution starts from `main()`

---

## Class in Java

- Class is a **container**
  - Where we put all the code

---

## Printing in Java

- Use:

```java id="u2ozdw"
System.out.println()
```

- Anything inside `" "` is a **string**

---

### Difference

- `println()` → prints + **new line**
- `print()` → prints in **same line**

---

## Important Notes

- Anything inside `" "` is treated as **string**
  - Even logic won’t work inside it

```java id="1l9v2y"
System.out.println("4+3");  // prints 4+3
System.out.println(4 + 3);  // prints 7
```

---

## Comments in Java

- Used when we want to write something but **not execute it**

```java id="3n7m0w"
// this is a comment
```

---

## Classic Java Code

```java id="c0lq8x"
public class Main {
  public static void main(String[] args) {
    System.out.println("hello bro");
  }
}
```

---

### Notes

- `public class Main`
  - Class name should match file name

- `public static void main(String[] args)`
  - Standard entry point (used in OOP)

---

## New Java Code (Simplified)

```java id="u4r2pk"
void main() {
  System.out.println("hallo " + " i am very happy");
  System.out.println("4+3");
  System.out.println(4 + 3);
}
```

---

## Summary

- `main()` → entry point
- Class → container
- Functions → reusable task blocks
- `System.out.println()` → output
- `" "` → string
- `//` → comment

---
