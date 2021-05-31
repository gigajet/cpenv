
# cpenv

Toolkits to write Competitive Programming code

## WTF is included

templates - of course

srm (Python version) - we can include many files in local, then merge into one "submit.cpp" when we need to submit.

Problem design (pattern?)

## WTF is assumed

+ C++ / VSCode / Windows

+ Python3 installed

## Why (the story)

Templates, obviously, makes code-writing faster.

With srm, one can write codes in many files, so bring forth your ICPC-notebook LOL.

(Still in emphirical testing phase) Problem design not-a-pattern helps one break the problem into many sub-problem and write them in modular way without worrying about variable name clashing. (Sort of a pipeline implemented by a stringstream as efficency price.) (more about this later)

## Workflow

Write code into `sol.cpp`. Feel free to create headers (such as `MaxFlow.h`, `String.h` or your whole ICPC-Notebook) and include them.

Invoke `b` (which is a [make for Windows](http://gnuwin32.sourceforge.net/packages/make.htm) in disguise) to compile the code.

Invoke `r` to run the code

When you need to submit, invoke `b s` then submit `submit.cpp`.
