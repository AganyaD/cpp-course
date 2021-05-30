# C++ Course Project Template

## Motivation

This project defines the most minimal project strcture required
for C/C++ projects with CMake as the build system.  
It has been created for an internal C++ course/training
for the Portia group, first occurred at Q2 2021.  
The course participants are asked to use this template as a basis for
all of the assignments given throughout the course.

## What's in the box?

* `CMakeLists.txt` - Root CMake file configuring the project
and an executable named **assignment**, using main.cpp as source file

* `main.cpp` – Essential source file containing the main function
to allow running the executable

* `.vscode/extensions.json` – Metafile that lists extension recommendations
for VS Code, will pop-up and recommend you install them if something’s missing

* `.vscode/launch.json` – Metafile listing debugger targets for VS Code.
Currently lists the **assignment** executable.

* `.vscode/tasks.json` - Metafile listing tasks for VS Code.
Currently lists a single build task calling CMake extension's build command.

## How to turn in an assignment?

* run: `git checkout <previous_assignment_branch>`

  (for first assignment - `git checkout master`)

* git checkout -b a new branch for the assignment.

  Name your branch: `<first_name>_<last_name>_Ex_<no>`

  For example, first assignment's branch will be: `John_Doe_Ex_1`

* Create your commits and push.

* When assignment is ready, open a merge request (to master) on Inbal & Timor.

## Disclaimer

The template is heavily oriented towards vscode, as this is the recommended
IDE for the course, and everyday development in general in the Portia group,
at least in 2021.
