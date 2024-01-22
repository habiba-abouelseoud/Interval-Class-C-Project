# Interval-Class-C-Project

This repository contains a C++ project implementing an `interval` class for handling numeric intervals. The class provides functionality for initialization, arithmetic operations, and input/output.

## Table of Contents

- [Introduction](#introduction)
- [Code Overview](#code-overview)
- [Features](#features)
- [Usage](#usage)



## Introduction

The `interval` class is designed to represent intervals of numeric values and includes various operations such as addition, subtraction, multiplication, division, and more.

## code overview

The project structure includes:
interval.h: Header file containing the declaration of the interval class.
interval.cpp: Implementation file containing the definitions of the interval class methods.
main.cpp: Example usage of the interval class in a main function.

## Features

- Initialization of intervals using different constructors.
- Overloaded arithmetic operators (+, -, *, /) for intervals.
- Overloaded assignment operators (+=) for intervals.
- User input and output for intervals.

## Usage

Here are some basic examples of how to use the `interval` class:

```cpp
interval x(3.0, 3.1);     // Initialize interval x
interval y(7);            // Initialize interval y with a single value
interval a = x + y;       // Perform addition of intervals
interval b = x - y;       // Perform subtraction of intervals
// ... (other operations)

cout << a;                // Output the interval a to the console
cin >> b;                 // Input a new value for interval b from the user
// ... (other input/output operations) 

