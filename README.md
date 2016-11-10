# ARCC - Autonomous Remote Control Car

##WARNING: This project is under heavy development.

##Introduction

This project is meant to be a comprehensive but simple autonomous RC car program running on a Raspberry Pi 3. It is written in C++ using modular implementation of the various steps involved in the working of an autonomous vehicle.

##Implementation

There are three separate parts of the program that work with each other using a consistent communication procedure, thereby separating the effects of the specific implementation of a part on the others. The three parts are Parser (for parsing maps), Pathfinder (for finding the optimal path), and Pilot (for sending time-based low-level signals to the servos).

##Contact

This project is managed by the [Society for Artificial Intelligence - BYUI](https://sai-byui.github.io). Refer to the contact details on that page.

###LICENSE
   Copyright 2016-present, Society for Artificial intelligence - BYUI

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
