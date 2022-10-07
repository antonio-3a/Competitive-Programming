"""
 ## Code by: "António 3A"
 ## UVa: 11827 - Maximum GCD
"""
import math

n = int(input())
for i in range(n):
    L = [int(x) for x in input().split()]
    g = 0
    for j in range(len(L)):
        for k in range(j + 1, len(L)):
            g = max(g, math.gcd(L[j], L[k]))
    print(g)