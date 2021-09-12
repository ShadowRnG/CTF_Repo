def split(word):
    return [char for char in word]
flag = 'wtfCTF{3l_g4m4l}'

P = 2147483647
a = 2147483527
da = 156
b = a**da%P

print (b)

N = split(flag)
M = []

for i in range(len(flag)):
    M.append(ord(N[i]))

print (M)

r = []
t = []

for j in range(len(flag)):
    k = b ** (j+2) % P
    r.append(a ** (j+2) % P)
    t.append((M[j] * k) % P)

print (r)
print (t)
