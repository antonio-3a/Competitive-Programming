"""
 ## Code by: "António 3A"
 ## UVa: 483 - Word Scramble
"""
from sys import stdin as ip
for ln in ip.readlines():
    lt = []
    [lt.append(s[::-1]) for s in ln.split()]
    print(*lt)
