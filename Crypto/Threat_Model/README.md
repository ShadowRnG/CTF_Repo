# Challenge Name:
Threat Model

Author: Shrenik Kalambur

# Challenge Description:

Whitfield and Martin are threat modelers who use password protected files. They use the following method of arriving at the password:
P = 8191
a and b are Merssene primes. 
G is related to a and b such that a*b - G = 14
The final key is 4278, while the password = (a+1)th term of the Geometric progression where G = a0, b = r

Flag:
7YHJGW06TRzMQnvg2rw4oa6ugAlcMRg6

They are threat modelers, can you understand their work and get the flag?

# Detailed Description:

The given threat model Describes the blowfish encryption system. The first branch points towards a Feistel Cipher, which is the family of ciphers that Blowfish belongs to. The second describes known vulnerabilities and drawbacks of the blowfish cipher. The third points towards the encripted zip file containing the key.


The password of the key file involved the Diffie Hellman key exchange. The relationship between G and P is that G is a primitive root of P. Using this, the values of a, b and G can be brute forced.
a = 7, b = 31, G = 203
Password: 5585060664533

Decrytion Tool: http://sladex.org/blowfish.js/

Flag: wtfCTF{thr3at_m0d3l}
