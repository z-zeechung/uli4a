**🏗️Development in progress. Commit welcomed.**

### ULI4A /ˈju:lɪfɑ:/ = Unix-like Interface for Any Platform

### mlibc = Minimal libc

🎯Target: Create a Unix-compatible layer for any platform. A platform could be an operating system, a bare machine, or something else.

🛣️Approach:

+ 📚A C library

+ 💻A graphic library

+ 📟A shell emulator

+ 📦A wrapper of any C compiler to emulate the behavior of GCC toolchain

📚mlibc: An easy-to-compile C library with minimal system interfaces, providing stability and good compatibility with current Unix software.

📜Principles:

+ Strive to define as few system interfaces as possible

+ Unless necessary or specified in the C standard, avoid the use of marcos

+ Do not use conditional compilation
