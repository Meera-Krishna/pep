# Copilot Instructions for PEP C++ Learning Project

## Project Overview
This is a C++ learning/practice codebase containing standalone programs (`pep1.cpp` through `pep8.cpp`) that demonstrate fundamental C++ concepts. Each file is an independent program with its own `main()` function - they are **not** linked together as a single project.

## Architecture & Structure
- **Independent Programs**: Each `.cpp` file is a self-contained executable. There are no shared headers, libraries, or cross-file dependencies.
- **Entry Point**: `main.cpp` is a simple hello world template; other files are problem solutions.
- **Build Pattern**: Each file compiles individually to its own `.exe` using g++.exe.

## Key Patterns & Conventions

### Input/Output Pattern
Programs use standard I/O with `cin` and `cout`:
```cpp
#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;           // Read input
    cout << result;     // Write output
    cin.get();          // Pause for console viewing
    return 0;
}
```

### Includes & Headers
- **pep1-pep4, pep7-pep8**: Use `#include <iostream>` only
- **pep5-pep6**: Use `#include <bits/stdc++.h>` (competitive programming convention) for algorithm access like `sort()`
- Maintain pattern consistency: newer files trend toward `bits/stdc++.h` for broader algorithm support

### Common Concepts Demonstrated
- **pep1**: Basic Hello World
- **pep2**: Input/Output with averaging
- **pep3**: Conditional logic (triangle validation)
- **pep4**: `std::sort()` with array manipulation
- **pep5**: Bitwise operations (`&`, `|`, `^`, `~`, `<<`, `>>`)
- **pep6**: Pointers and double pointers, pointer arithmetic
- **pep7**: 2D arrays and matrix traversal
- **pep8**: Pattern printing (incomplete - hollow triangle structure)

## Build & Execution

### Build Command
```
g++.exe -fdiagnostics-color=always -g "${file}" -o "${fileDirname}\${fileBasenameNoExtension}.exe"
```
- Always compiles active file individually
- Output: `.exe` in same directory as source
- Debug symbols included (`-g` flag)

### Execute Any Program
Each compiled `.exe` runs independently from command line - no dependencies between programs.

## Development Conventions
1. **Input reading**: Always use `>>` operator with `cin`; include `cin.get()` twice at end to pause console before exit
2. **Variable naming**: Simple, single-letter or descriptive (e.g., `m`, `n` for dimensions; `avg`, `arr` for aggregates)
3. **Comments**: Minimal - usually one-line describing the problem (e.g., "to print hollow triangle", "print column in array")
4. **No global state**: Each program is stateless; state exists only for active program's scope

## When Adding New Files
- Follow naming: `pepN.cpp` where N is next number
- Choose `#include <bits/stdc++.h>` for STL algorithm access; else `<iostream>` for basic I/O
- Implement complete `main()` function with input handling, processing, output, and `cin.get()` pause
- Test with g++.exe build task to verify compilation and correct output
