# C++ Compound Interest Calculator

Compound interest is where the interest of an initial 'principal' deposit is added to the principal, where the interest is reinvested to gain further interest. Therefore, as interest accumulates, the principal amount grows, so the interest grows, so the principal grows faster, and so on.

## Formula

The formula for compound interest can be represented with

$Amount = P(1 + R/100)^t$

$P = Principal$

$R = interest Rate$

$T = Time span$

## Function

`calculateInterest` function accepts these variables as arguments and returns a `double` with the compound interest total amount.

In the program's `main` function please accept these variable variables as input from the user using `std::cin` and pass them to the `calculateInterest` function.

Then output the total amount after the specified time period, and the total amount of compound interest accumulated without the principal

### Example

```txt
Principal: 1500
Interest Rate: 12.5
Time Span: 3

Compound Interest: 635.742
Total Amount: 2135.74
```

## Compiling

Compiling is covered in depth in [Learncpp Chapter 0.7](https://www.learncpp.com/cpp-tutorial/compiling-your-first-program/), but a brief example for **Linux** is as follows:

### Install

```console
$ sudo apt install g++
```

### Compile

```console
$ g++ -o assignment assignment.cpp
```

### Execute

```console
$ ./assignment
```
