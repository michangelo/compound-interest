# C++ Assignment 1 - Compound Interest (Individual)

**Complete individually** 

To be completed after finishing Chapters 0-5 (Plus optional chapter O) on [LearnCPP](https://www.learncpp.com/)

## Instructions

Compound interest is where the interest of an initial 'principal' deposit is added to the principal, where the interest is reinvested to gain further interest. Therefore, as interest accumulates, the principal amount grows, so the interest grows, so the principal grows faster, and so on.

The formula for compound interest can be represented with

$Amount = P(1 + R/100)^t$

$P = Principal$

$R = interest Rate$

$T = Time span$

### Assignment

Your assignment is to create a C++ program that includes a `calculateInterest` function that accepts these variables as arguments and returns a `double` with the compound interest total amount.

In the program's `main` function please accept these variable variables as input from the user using `std::cin` and pass them to the `calculateInterest` function.

Then output the total amount after the specified time period, and the total amount of compound interest accumulated without the principal

### Example:

```txt
Principal: 1500
Interest Rate: 12.5
Time Span: 3

Compound Interest: 635.742
Total Amount: 2135.74
```

## Autograding

### Files

You ***MUST NOT:*** **DELETE** or **RENAME** `assignment.cpp` or `autograder.gpg`.

Executing `main()` from `assignment.cpp` should satisfy the requirements above. You are allowed to add as many other `.cpp`, `.h`, or subdirectories you need to organize your solution, but these filenames should remain unchanged in the project root. Ensure you edit `assignment.cpp` with your solution.

Additionally, `.devcontainer`, `.gitignore`, and `README.md` can be edited at your own risk, but they are not required to be edited to complete the assignment. Focus on adding your own implementation to `assignment.cpp`.

### Testing

When you commit any changes Github Classroom will autograde your submission, but you will not be able to view any of the reasons you fail a test. Github will tell you when you have passed all tests successfully.

*Therefore, you are responsible to thoroughly test your assignment and consider all edge cases*

## Repo Setup

### Option 1: Github Codespaces

This will allow you to work on this assignment remotely from the web in the cloud using Github Codespaces.

1. Click the green "Code" button in the top right of the repo
2. Click the "Codespaces" tab
3. Click "Create codespace on main"
4. Wait for the codespace to be created

You can now edit the code in the browser.

You can "commit" your code by opening a terminal and running:

```bash
git add .
git commit -m "My commit message"
git push
```

This will save your code to GitHub so you can access it later. And also will submit it for **autograding**.

### Option 2: VS Code Dev Container

If you have *VS Code* and *Docker* installed ([see getting started steps](https://aka.ms/vscode-remote/containers/getting-started)), you can follow these steps:

1. Clone the repo to your computer using [HTTPS](https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls) or [SSH](https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-ssh-urls).
2. Open VS Code
3. Press `F1` and select the **Dev Containers: Open Folder in Container...** command.
4. Select the cloned copy of this folder, wait for the container to start, and try things out!

### Option 3: Local Development Environment

1. Clone the repo to your computer using [HTTPS](https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls) or [SSH](https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-ssh-urls).
2. Open the repo in your favorite editor/IDE.
3. If you haven't already, install a compiler. See `Chapter 0` of [LearnCPP](https://www.learncpp.com/).
4. Edit, compile, run, and test your code.
5. You can "commit" your code by opening a terminal and running:

```bash
git add .
git commit -m "My commit message"
git push
```

This will save your code to GitHub so you can access it later. And also will submit it for **autograding**.

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