# ARCC - Autonomous Remote Control Car

##WARNING: This project is under heavy development.

##Introduction

This project is meant to be a comprehensive but simple autonomous RC car program running on a Raspberry Pi 3. It is written in C++ using modular implementation of the various steps involved in the working of an autonomous vehicle.

##Implementation

There are three separate parts of the program that work with each other using a consistent communication procedure, thereby separating the effects of the specific implementation of a part on the others. The three parts are Parser (for parsing maps), Pathfinder (for finding the optimal path), and Pilot (for sending time-based low-level signals to the servos).

##Contact

This project is managed by the [Society for Artificial Intelligence - BYUI](https://sai-byui.github.io). Refer to the contact details on that page.

