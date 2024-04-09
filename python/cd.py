from sys import stdin

nm = [int(x) for x in stdin.readline().split()]
cds = set()
for i in range(nm[0]):
    cds.add(stdin.readline())
for i in range(nm[1]):
    val = stdin.readline()
    if val in cds:
        cds.remove(val)
    else:
        cds.add(val)
print(len(cds))