<h1 align="center">
  <img src="https://readme-typing-svg.herokuapp.com/?font=Righteous&size=35&center=true&vCenter=true&width=500&height=70&duration=4000&lines=welcome+to+libft!;" alt="Typing SVG" />
</h1>


### 🧵 Project Overview

Say hello to `libft`, my first adventure into the land of C at 42! 🚀  
The goal? Recreate key parts of the C standard library, one function at a time — no training wheels allowed.

Why? Because 42 said *"write it yourself,"* and I said *"okay, let make it ✨fabulous✨."*

This project is all about:
- 🧠 Learning how memory works (`malloc` and friends)
- ✂️ Rewriting the tools you thought were built-in
- 🌀 Surviving pointers, edge cases, and debugging (a.k.a. emotional damage)
  
---

<img align="right" src="https://media.giphy.com/media/v1.Y2lkPTc5MGI3NjExYTM2OWhraW5oN3hmYmoyaHcwa2lscTRnYWtkMmdraHh1ZW1xd2FoMSZlcD12MV9zdGlja2Vyc19zZWFyY2gmY3Q9cw/3FvaG9XbBRbLtdaUUP/giphy.gif" width="134" />

### ✍️ What’s inside?

`libft` is a custom C library filled with reinvented classics — strings, memory, character checks, conversions...  
Basically, it’s the standard library... but made by *me*. 💅

Everything is written in **pure C**, tested on Linux/macOS, debugged with tears, and commented with love. 🧵

</br>

<div align="center">

| 🧩 Category | ✨ Functions |
|------------|-------------|
| 🔠 Strings | `ft_strlen`, `ft_strncmp`, `ft_strdup`, `ft_strchr` |
| 🧠 Memory  | `ft_memset`, `ft_memcpy`, `ft_bzero`, `ft_calloc` |
| 🔎 Checks  | `ft_isalpha`, `ft_isdigit`, `ft_isprint`, `ft_toupper` |
| 🔁 Others  | `ft_atoi`, `ft_itoa`, `ft_split`, `ft_substr`, `ft_strjoin` |
| 💎 Bonus!  | `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstclear`, etc. |

</div>

</br>

---

### 🚀 How to use

Wanna try it out?

```bash
git clone https://github.com/haffout-imane/libft.git
cd libft
make        # Compile mandatory functions
make bonus  # Compile with bonus functions
make clean  # Remove object files
make fclean # Remove object & library files
make re     # Clean and recompile
```
Then in your C file:
```c
#include "libft.h"
```
Compile with:
```bash
gcc your_code.c -L. -lft
```
Boom 💥 You’re using your own standard library like a boss.

---

### 🔧 Tools & Environment

- Developed on: Linux Ubuntu 22.04 LTS  
- Compiled with: GCC 11.2  
- Tested on: Linux & macOS (because we love portability)  
- Editor: Vim (powered by coffee ☕️ and good vibes)

---

### 📚 Learning Resources

A few gems that saved my sanity:

- [The C Programming Language by Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language) — The Bible of C  
- [42 Libft Wiki](https://github.com/42School/libft) — Official specs and tips  
- [Learn C the Hard Way](https://learncodethehardway.org/c/) — For when you want to cry and learn simultaneously 😅

---

### 💡 Tips & Tricks

- Off-by-one errors will be your worst enemy in string functions — triple-check those indices!  
- Always test edge cases like empty strings and NULL pointers. Your code’s survival depends on it.  
- Use `valgrind` to hunt memory leaks like a pro. Memory bugs are sneaky little devils.  
- Comment your code like you’re explaining to your future self (because you will thank yourself later).

---


