# UnitTests – C++ Project (GoogleTest)

**Student:** Enis Shabani

**Mini Projekt: UnitTests**

Ky projekt përmban implementimin e pesë funksioneve të ndryshme në C++ si dhe testet përkatëse të krijuara duke përdorur GoogleTest.

---

## 📁 Struktura e Projektit
```zsh
UnitTests_HW_GrX_Student116_EnisShabani/
│── CMakeLists.txt
│── googletest/               
│
│── MyFunctions/
│     ├── T01_IsValidEmail.h
│     ├── T01_IsValidEmail.cpp
│     ├── T02_CalculateShipping.h
│     ├── T02_CalculateShipping.cpp
│     ├── T03_ContainsBadWords.h
│     ├── T03_ContainsBadWords.cpp
│     ├── T04_PassedExam.h
│     ├── T04_PassedExam.cpp
│     └── T05_IsStrongPassword.h
│           T05_IsStrongPassword.cpp
│
└── MyFunctionsTests/
      ├── T01_IsValidEmailTest.cpp
      ├── T02_CalculateShippingTest.cpp
      ├── T03_ContainsBadWordsTest.cpp
      ├── T04_PassedExamTest.cpp
      ├── T05_IsStrongPasswordTest.cpp
```
--- 

## ⚙️ Kërkesat teknike

Për të ndërtuar dhe testuar projektin, nevojiten:
```zsh
C++ Compiler
AppleClang (Mac)
MinGW / MSVC (Windows)
CMake ≥ 3.10
Git
VS Code ose IDE tjetër
```
---

## 🔧 Instruksionet e instalimit të GoogleTest

GoogleTest nuk instalohet globalisht — ai vjen si pjesë e projektit.

**1. Klono googletest brenda projektit:**

```zsh
git clone https://github.com/google/googletest.git
```
Pas kesaj do te krijohet folderi googletest
```zsh
/googletest
```
GoogleTest kompilohet automatikisht nga CMake kur ndërtohet projekti.

---

## 🏗️ Build dhe ekzekutimi i testeve (Mac/Linux)

1. Hyr në folderin e projektit:
```zsh
cd UnitTests_HW_GrX_Student116_EnisShabani
```
2. Krijo folder build:
```zsh
mkdir build
cd build
```
3. Gjenero projektin me CMake:
```zsh
cmake ..
```
4. Ndërto projektin dhe testet:
```zsh
cmake --build 
```
5. Ekzekuto testet:
```zsh
./runTests
```
6. Rezultati duhet te dal: 
```zsh
[==========] Running x tests
[  PASSED  ] All tests passed.
```