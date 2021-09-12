# W1n_W0n

Author: [NithinChowdary](https://github.com/nithinchowdary007)

## Description

My friend hid something on my system. I want to know what it is, But Im bad at analysing. Can you do it for me?

## Sources

- [CHa11enge.rar](https://drive.google.com/file/d/1sUMfmCLNy-xmytBCq8BX9Kj8aFoDuciq/view?usp=sharing)

## Exploit
1. Check imageinfo using volatility 
2. Check pslist, we observer cmd and winrar 
3. check cmdscan(volatility 2), we find a string not sure where to use[password for zip file]
4. as winrar is running, check file scan with grepping rar or zip, we get 1mP.zip encrypted with pwd
5. use the string we got in cmdscan as pwd and we get the flag
<br />

The flag is:

```
wtfCTF{W1nd0w5_1s_f0r_N0085}
```

