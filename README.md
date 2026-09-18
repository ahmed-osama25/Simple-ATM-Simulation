# 🏧 Simple ATM Simulation

A simple **C++ OOP project** that simulates basic ATM operations.

The user can enter their card information, log in to their account, check their balance, deposit money, withdraw money, and change their PIN.

## 🚀 Features

* Enter Card Number, PIN, and Initial Balance.
* Login using Card Number and PIN.
* Check current balance.
* Deposit money.
* Withdraw money.
* Change PIN.
* Validate deposit and withdrawal amounts.
* Simple interactive ATM menu.

## 🧠 ATM Operations

### 1. Check Balance

Displays the current account balance.

### 2. Deposit

Allows the user to add money to their balance.

* Amount must be greater than `0`.

### 3. Withdraw

Allows the user to withdraw money from their balance.

* Amount must be greater than `0`.
* Amount cannot exceed the current balance.

### 4. Change PIN

Allows the user to change their PIN after entering the correct old PIN.

### 5. Exit

Closes the ATM simulation.

## 🛠️ Concepts Used

* Classes & Objects
* Encapsulation
* Private Data Members
* Setters
* Boolean Functions
* Conditional Statements
* `while` Loop
* `if / else`
* User Input
* Menu System
* Basic Validation

## 📋 Menu

```text
===== ATM MENU =====
1- Check Balance
2- Deposit
3- Withdraw
4- Change PIN
5- Exit
```

## 💻 Example

```text
Enter Card Number: 123456789
Enter PIN: 1234
Enter Initial Balance: 5000

Enter Card Number to login: 123456789
Enter PIN: 1234

Login successful!

===== ATM MENU =====
1- Check Balance
2- Deposit
3- Withdraw
4- Change PIN
5- Exit

Enter your choice: 2

Enter amount to deposit: 1000

Deposit successful!
```

## 📁 Project Structure

```text
Simple-ATM-Simulation/
│
└── ATM.cpp
```

## 🎯 Purpose

This project was created as a small **C++ OOP practice project** to strengthen understanding of:

* Classes
* Objects
* Encapsulation
* Functions
* Loops
* Conditional Logic
* User Input
* Basic Validation

## 👨‍💻 Author

**Ahmad Osama**

---

⭐ If you found this project useful, feel free to check out the other projects in my GitHub profile.
