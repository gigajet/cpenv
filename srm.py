import sys
import re

def srm (file):
    for line in file:
        line=line.rstrip('\n') #Do not delete indent & spacing
        m = re.search('^#include "([.\w]+)"', line)
        if m:
            with open(m.group(1),'r') as f:
                srm(f)
        else:
            print(line)

if __name__=="__main__":
    srm(sys.stdin)
        
        
        
