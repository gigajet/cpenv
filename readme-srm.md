# srm - submit ready main

## What (Skip this for your sanity)

This is a story about a C++ boy wandering in competitive programming. He is interested in writing good templates, defining clever macros. Again and again, he finds his code ugly, as if artificial flowers get boring after a while. define ONLINE_JUDGE for reading from stdin and writing to stdout? define a sophisticated class for operating with mod? define hash?

One day, he realizes the simple truth, the truth he misses many times. His `main.cpp` is too long. It looks like a hot-pot hell of algorithms and global variables. He can't see where `n`, `k`, `m`, or `visited` are declared. He scrolls up and down to find `dfs()` routine, just to edit a basic case. He needs to use `hash` without writing out its gory details. No off-by-one on familiar loops. Those things he must write again and again.

He thought that, no, he can submit a mere file. So no go for writing max flow code in a library and #include it. Because there is only one file to submit. If he wanna use it, he must copy it over, and continue to write lines of code in an ugly complicated source file, a job as unmotivating as putting meatball in a wash-basin-sized hotpot. Code complexity, morale complexity, attention complexity, these trivial things lead him to forget the abstract algorithm, which he already lacks to worry over boring trivial technical details. That's too much.

## When

he struggles with himself. He is lazy. Solving challenges is boring.

## Where

In his mind.

## Who

Him

## Why

He wanna write code his style, the one-file-to-submit requirement is stupid to worry about. He needs a mapping, i.e a function translates his code into one file.

He would write his template into multiple files, like an ACM notebook.

And run some kind of scripting or tool to make multiple includes into one `submit.cpp`. This file is for submitting to online judges. He calls this tool `srm`.

Why not `g++ -E main.cpp -o submit.cpp`, you say? As far as I know, the file is 3 MB cpp for simple program including `<bits/stdc++.h>`, too big to be accepted by any online judge.

## How

When an #include is file specfic, such as #include "KMP.h" or #include "ZFunc.h" but not #include <set> or #include <bits/stdc++.h>, it is expanded recursively. This means that if inside "KMP.h" there is #include "KMP_basic.h", then `KMP_basic.h` get expanded, in its proper order.

Prerequisite: Perl 5 for Perl version or Python3 for Python version

Invoke:

```
perl srm.pl <main.cpp >submit.cpp
python srm.py <main.cpp >submit.cpp
```



