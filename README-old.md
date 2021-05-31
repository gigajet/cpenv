
# cpenv

Toolkits to write Competitive Programming code

[Binary](https://github.com/gigajet/cpenv/releases) built for Windows 7 PC

## Consist of

[fts](https://github.com/gigajet/fts) - Automatic tester. They are `fts.exe`, `ftest.exe`, `cmp.exe` files.

cp.bat - Main interface. Interact with this file.

## Support

C++

## Why (the story)

Time is precious, especially during critical contests.

Attention is expensive, especially during critical thinking.

Yet when I change a variable or change a colon, I *wait* for compilation to complete then go back and forth to copy test cases into input file, run the program, and eyeball the output file to compare with sample output.

When I have multiple test cases (some of them are hand-generated), I found myself copy and paste over and over, then eyeball the result again and again.

I should tell the computer to compile, run and compare the result automatically. If I am wrong, it reports which sample test. All within a few keystrokes.

## Workflow

Write code into `main.cpp`. Good editor preferred. Ensure no compilation error.

Copy input of same test cases into i0, i1, i2... (without extension). If prefer i0.txt, i1.txt, change cp.bat

Copy respective outputs into o0, o1, o2...

Invoke `cp c`. That's all.
