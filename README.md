<p align="center"><img src="https://scontent.fbog9-1.fna.fbcdn.net/v/t1.6435-9/173093186_803840163884193_1634066376585725285_n.jpg?_nc_cat=109&ccb=1-3&_nc_sid=730e14&_nc_ohc=fvX6j0y_ZmEAX-KBsFX&_nc_ht=scontent.fbog9-1.fna&oh=ebdd46159e7de38331dc80988d533eaa&oe=60988D55
"/></p>

# Simple Shell :computer:


This repository contains the program written in C to simulate a Shell, is a command
interpreter where the user has an interface available through which they have the
possibility of accessing the services of the operating system, as well as invocation
or execution of programs.


## Example
This example shows that the **ls -l** command is written at the Shell prompt which
checks whether the command exists and if so the command is interpreted and sends
it to the kernel which executes the command to list all files and
directories and print them on the screen

<p align="center"><img src="https://imgs.developpaper.com/imgs/201810890740605.png"\>

## Compile
In order to build the project you need to have all the files and put the following command

$ gcc -Wall -Werror -Wextra -pedantic holberton.h *.c -o hsh

which generates an executable called **hsh** with which you can run the simple Shell and test commands 

## Files :open_file_folder:

- **README.md** : Contains the description of how the code works and
                  the description of the files used.
- **holberton.h** : Is our header file that contains all the function calls and
                    libraries that will be used in the Shell project.
- **get_path_dir** : This file contains the structure to make the call to
                     the PATH and separate it by sud directories.
- **get_line_com** : This program contains the function to type at the  prompt
                     and get the command line.
- **select_built_in** : This function validates whether the input argument is a
                        valid command within the system.
- **search_dir_com** : This file has the function that validates the input
                       argument and looks in the PATH if the input command exists in the directory.
- **exec_com_args** : This file has the function of creating the child process
                      and executing the input argument.
## Requirements 🛠️
- Ubuntu 14.04 LTS
- Functions and files will be compiled with gcc 4.8.4 with flags

## Authors ✒️
- **Cristian Pinzón Capera** - [faykris](https://github.com/faykris)
- **Julio Cesar Arenas** - [jihuder](https://github.com/jihuder)
- **Juan Sebastián Tovar** - [juanstm200](https://github.com/juanstm200)
