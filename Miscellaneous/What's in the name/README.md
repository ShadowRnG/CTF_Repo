# What's in the Name?

Author: [Ayush Vatsa](https://github.com/mrvatsa)

## Description

Relatively simple challenge which involves stegno, crypto and basic navigation. You are presented with a PNG which contains the Challenge folder. 

## Sources

- [LSBmy5t3ry80x.png](./LSBmy5t3ry80x.png)

<br />

Challenge description to go up on the website
```
I keep losing my “keys”. Can you help me find it? 

Hint1: Let’s take a “walk” to the “bin” in my “zsteg” shoes.

```

## Exploit

You start with any steghide tool (zsteg, binwalk) to extract the files from the PNG (LSBmy5t3ry80x.png). You will then have the mother folder with the hidden flag inside. 
The flag is in three parts scrambled across the folders. The ideal method would be to use terminal and start from the parent dictionary. There are text files in some folders which may be the hint. Terminal is preferred because there are hidden files as well. The flags are in text files. After exploring and getting rickrolled a few times, we find the flag in 3 parts. 

#Part 2

```
$ cat here/not\ here/no/maybe

[part 2] XD



X1RocjMzXw==



this is the flag, but it isn't. Keep this in mind. 
```

The provided flag is Base64 encoded. And after decrypting the result is  
```_Thr33_```


#Part 1

There is a hidden text file in the folder “or here” named “.something”

The contents are
```
you may need this

"cuteCAT"


---------------
```

After getting into the folder “don’t know”, we find a png named mysterybox, which appears to be another zipped png. And yes indeed it is, and the password is “cuteCAT”.
Using Zsteg and binwalk we extract the folder to get the flag part 1

```wtfCTF{in```



#Part 3

The third part is inside a hidden folder named “.Noob”

 ```
$ cat or\ here/.Noob/a\ noob\?/hehe\ noob 


VGhpcyBpcyB0aGUgbGFzdCBiaXQuCgoKW1BhcnQzXQoKCnBBciFzfQo=


----------------
```

This is again base64 encoded and after decryption we get
```
This is the last bit.


[Part3]


pAr!s} 
```



which makes the final flag as
```
wtfCTF{in_th33_pAr!s}
```

<br />


<br />

The flag is:

```
wtfCTF{in_thr33_pAr!s}
```

