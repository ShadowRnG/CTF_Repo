# W1n_W0n_Pr0

Author: [NithinChowdary](https://github.com/nithinchowdary007)

## Description

Hey!One of my friend borrowed my computer yesterday and I don't know what he did with it. I have obtained dump of my computer. I know you are an analyst and I want you to find out some information for me.

1. How many times calc.exe exeuted?
2. How long mspaint.exe is being used?
3. There was a USB device connected to PC. When was it last connected
4. FLAG FORMAT: wtfCTF{count_MM:SS_YYYY-MM-DD_HH:MM:SS}


## Sources

- [Challenge2.rar](https://drive.google.com/file/d/1frwEYsDzRw7_6OBGLJDV_aPUmIbxgUlm/view?usp=sharing)

## Exploit
sudo git clone https://github.com/kevthehermit/volatility_plugins.git
1. python2 vol.py -f /home/orkinking/Documents/Incognito/wtfCTF/W1n_W0n_pr0/Challenge2.raw --profile=Win7SP1x64 userassist
2. python2 vol.py --plugins=volatility_plugins/usbstor -f /home/orkinking/Documents/Incognito/wtfCTF/W1n_W0n_pr0/Challenge2.raw --profile=Win7SP1x64 usbstor
<br />

The flag is:

```
wtfCTF{45_08:17_2021-05-21_08:00:17}
```
