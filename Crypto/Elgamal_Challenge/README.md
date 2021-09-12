# Challenge Name:
El Gamal's Kryptonite

Author: Shrenik Kalambur

# Challenge Description:

ElGamal is stuck on this problem. Can you help him solve it?

P = 2147483647
a * da = 335007430212
c2 = [782609095, 956334224, 948802740, 27994553, 1649557991, 1242339631, 2047940013, 1044206616, 758980367, 542738157, 1732201892, 196836220, 193577195, 649932019, 1925903078, 862766676]

da is related to P in the same way that a is
Public key : {P, a, b}
Private key = da
b = (a ^ da) mod P
c1 = (a^r) mod P, where r is a random integer calculated by the following loop: 2 < r < (len(c2)+2)

# Detailed Description:

The given problem requires two things: the primitive roots of P, and c1. With some trial and error, a and da can be found out as 156 and 2147483527 respectively. Following that, c1 can be calculated to:
[14400, 2145755647, 207360000, 886603764, 981730670, 303920185, 36799799, 2026475061, 1636128438, 1233082964, 206415963, 999888204, 272499752, 1659768112, 543805731, 1315305337]

r varies from 2 to 18

Finally, the flag can be decrypted using the values of c1, c2 and da.
The tool can be used for decryption: https://cryptocalc.giondesign.com.au/elgamal-crypto-calc/
The decryption formula is given by c1 . c2^(-da) = m.
The final list of values of m give the ASCII value of the corresponding characters of the flag.
Flag: wtfCTF{3l_g4m4l}
