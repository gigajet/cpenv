.PHONY: main
main:
	g++ sol.cpp -Wall -std=c++14 -o r.exe 
.PHONY: s
s:
	python srm.py <sol.cpp >submit.cpp
.PHONY: c
c:
	del /Q /F r.exe
