\# CPP Systems Practice - TEMP/REWRITE



\## Overview

This repository contains a hands-on C++ playground to experiment with core C++ concepts and their application to gameplay systems. The project is organized into phases covering fundamentals, functions, memory management, and object-oriented programming.



Each experiment demonstrates practical usage of C++ constructs with small gameplay-themed examples, such as player stats, character actions, and variable types.



---



\## Project Structure



Phase1\_fundamentals/

01\_variables/ # Experiments with variable types, boolalpha, sizeof()

02\_relational\_operators/

03\_truth\_values/



Phase2\_functions/

01\_scope/

02\_functions/



Phase3\_memory/

01\_dynamic\_memory/

02\_destructors/



Phase4\_oop/

01\_polymorphism/

02\_virtual\_functions/



\- `main.cpp` – Experiment runner, calls functions from each experiment.

\- `Experiment\_runner.h` – Header containing enum or function declarations to control which experiment runs.

\- Subdirectories contain `.cpp` and `.h` files for individual experiments.



---



\## How to Run



1\. Open the solution in \*\*Visual Studio 2022\*\* (or later).

2\. Build the solution (requires C++20 support).

3\. Run the `main.cpp` executable.

4\. Modify the `Experiment\_runner` enum to select which experiment to execute.

