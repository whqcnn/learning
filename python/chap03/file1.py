aa = open('sketch.txt')

print(aa.readline())
print(aa.readline())

aa.seek(0)

for bb in aa:
    (a1, a2) = bb.split(":", 1)
    print a1,
    print ' said: ',
    print a2,
aa.close()

for num in range(10):
    print (num)
