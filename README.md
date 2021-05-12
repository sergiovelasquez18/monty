# 0x18. C - Stacks, Queues - LIFO, FIFO aka monty

## Description
_In this project we are tasked to create an interpreter for Monty ByteCode files. These files will have commands per line to manipulate the data structure given._

What you should learn from this project:

* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables
* How to work with git submodules

---
**Resources**

	* Google
	* How do I use extern to share variables between source files in C?
	* Working with submodules

---
## Instructions

Compile with:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
---

## Example
<pre><code>julien@ubuntu:~/0x18. Stack (LIFO) &amp; queue (FIFO)$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/0x18. Stack (LIFO) &amp; queue (FIFO)$
</code></pre>


