#!/usr/bin/env python

import sys

for line in sys.stdin:
    print "B\t" + line[:-1]