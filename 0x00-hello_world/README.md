# 0x00. C - Hello, World
### Concepts
For this project, we expect you to look at this concept:
* [C programming](https://intranet.alxswe.com/concepts/26 "C PROGRAMMING")

# Resources
### Read or watch:
* [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230615%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230615T154756Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=8b492ee75369b8f5550e209b805313129b76440d2d73017187a88e4e08efed27 "LINK")(*You do not have to learn everything in there yet, but make sure you read it entirely first*)
* [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie "Dennis Ritchie")
* [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M "“C” Programming Language: Brian Kernighan")
* [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc "Why C Programming Is Awesome")
* [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ "Learning to program in C part 1")
* [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU "Learning to program in C part 2")
* [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA "Understanding C program Compilation Process")
* [Betty Coding Style](https://github.com/alx-tools/Betty/wiki "Betty Coding Style")
* [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21 "Hash-bang under the hood")(*Look at only after you finish consuming the other resources*)
* [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus "http://harmful.cat-v.org/software/c++/linus")(*Look at only after you finish consuming the other resources*)

### man or help
* gcc
* printf (3)
* puts
* putchar
# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg "explain to anyone"), without the help of Google:
## General
* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type *gcc main.c*
* What is an entry point
* What is *main*
* How to print text using *printf, puts* and *putchar*
* How to get the size of a specific type using the unary operator *sizeof*
* How to compile using *gcc*
* What is the default program name when compiling with *gcc*
* What is the official C coding style and how to check your code with *betty-style*
* How to find the right header to include in your source code when using a standard library function
* How does the *main* function influence the return value of the program
## Copyright - Plagiarism
* You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
* You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
* You are not allowed to publish any content of this project.
* Any form of plagiarism is strictly forbidden and will result in removal from the program.
# Requirements
# C
* Allowed editors: *vi, vim, emacs*
* All your files will be compiled on Ubuntu 20.04 LTS using *gcc*, using the options *-Wall -Werror -Wextra -pedantic -std=gnu89*
* All your files should end with a new line
* A *README.md* file at the root of the repo, containing a description of the repository
* A *README.md* file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use *system*
* Your code should use the *Betty* style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl "betty-doc.pl")
# Shell Scripts
* Allowed editors: *vi, vim, emacs*
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long (*$ wc -l file* should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly *#!/bin/bash*
# More Info
## Betty linter
To run the Betty linter just with command *betty <filename>:*
* Go to the [Betty](https://github.com/alx-tools/Betty "Betty") repository
* Clone the repo to your local machine
* *cd* into the Betty directory
* Install the linter with *sudo ./install.sh*
* *emacs or vi* a new file called betty, and copy the script below:
* Once saved, exit file and change permissions to apply to all users with *chmod a+x betty*
* Move the *betty* file into */bin/* directory or somewhere else in your *$PATH with sudo mv betty /bin/*
You can now type *betty <filename>* to run the Betty linter!
