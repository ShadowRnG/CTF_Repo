# H4CK3R Vs C0d3R

Author: [NithinChowdary](https://github.com/nithinchowdary007)

## Description
Are you really a hacker???


## Sources

- [encr3pt.py](./encr3pt.py)
- [coder.png](./Images/coder.png)
- [hacker.png](./Images/hacker.png)


## Exploit
```py
from PIL import Image
import numpy as np
import os

file_names = ["flag_A.png", "flag_B.png"]
img_data = [np.asarray(Image.open(f'{name}')) for name in file_names]

data = img_data[0].copy() + img_data[1].copy()

new_image = Image.fromarray(data)
new_image.save("Fl48.png", "PNG")
```

The flag is:

```
wtfCTF{Did_u_h4ck1t_or_50lv31t}
```
