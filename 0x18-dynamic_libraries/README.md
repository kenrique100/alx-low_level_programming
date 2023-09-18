# Dynmic Libraries in c
# Resources
### Read or watch:

- [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
- [create dynamic libraries on Linux](https://www.google.com/#q=linux+create+dynamic+library)

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg "explain to anyone"), without the help of Google:

# General
- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage nm, ldd, ldconfig

# Copyright - Plagiarism
- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

# Requirements
# C
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo - (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in - the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file.

# Bash
- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your files should end with a new line ([why?](https://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
- The first line of all your files should be exactly #!/bin/bash
- A README.md file, at the root of the folder of the project, describing what each script is doing
- All your files must be executable
 
 # Procedures

# Creating your own Dynamic library
- Create your .c file/s to hold function definitions


- Compile all .c file/s to get its equivelent object file this way
        `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic -c *.c`

- Now create the shared library
`gcc -shared *.o -o lib<libraryname>.so`

- Create an environmental variable so that the resolver can quickly locate the libray. you do
`export LD_LIBRARY_PATH=$PWD`

## To use shared library

- Create program to use with shared library

- Compile the program to its equivalent object file to use shared library
        `gcc -Wall -Werror - Wextra -pedantic -std=gnu89 -c -fpic <filename>.c`

- Now compile the object file to link with shared library function
`gcc <filename>.o -L. -l<libraryname> -o <outputfilename>`
	{it's optional doh}

### Alternative way to creating your dynamic Library
- Create all .c file/s
- Compile them this way to create the shared library
	`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic *.c -shared -o lib<library_name>

### Using the shared library to compile files
- Create the c file/s
- Compile them this way
`gcc -Wall -Werror -Wextra -pedantic -fpic <*.c or c_file_name.c> -L. -l<libname> -o <exe_filename>`
