# Enhanced Competitive Programming Setup

## Quick Start

### For a New Contest
1. Run `setup_contest.bat` and enter contest name
2. Navigate to the problem directory: `cd contests\[contest]\[problem]`
3. Edit `solution.cpp` with your solution
4. Add test cases to `input.txt`
5. Run `run.bat` to build, execute and test

### For a Single Problem
1. Run `new_problem.bat` and enter problem name
2. Navigate to the problem directory: `cd [problem]`
3. Edit `solution.cpp` with your solution
4. Add test cases to `input.txt`
5. Run `run.bat`

## Features

- **Organized Structure**: Separate directories for each contest and problem
- **Automated Testing**: Automatically compares output with expected results
- **Performance Measurement**: Shows execution time for optimizing solutions
- **Color-Coded Output**: Easy-to-read terminal output with colors
- **Templates**: Ready-to-use template with common CP helpers

## Shortcuts

### Building and Running
- `run.bat` - Build and run with input.txt, saving output to output.txt

### Creating New Problems
- `new_problem.bat` - Create a new problem with template solution
- `setup_contest.bat` - Set up directory structure for an entire contest

### Manual Commands
```
g++ -std=c++17 -O2 -Wall -Wextra -o solution solution.cpp
solution.exe < input.txt > output.txt
```

## Template Features

The template includes:
- Fast I/O optimization
- Common typedefs and macros
- Debug helpers
- Option for file input/output
- Test case handling

## Helpers Library

The `helpers.hpp` file includes:
- Timer class for performance measurement
- Math functions (GCD, LCM, fast power)
- Prime number checking
- Sieve of Eratosthenes implementation

## VSCode Integration

For VSCode users:
1. Press F5 to build and debug with interactive console
2. Use Ctrl+Shift+B to build without running
3. Use the included tasks for various operations