# tea-time

Author: [Parthiv Menon](https://github.com/Parthiv-M)

## Description

This challenge requires the knowledge of cookies, which are sent from the server to the client side and stored on the browser. The player needs to find out the correct guess to the problem statement: 'John lives in the UK and loves cream bisucits the most. Can you guess what he does not like?'. 

## Challenge description to go up on the website

Can you help John? https://timeisthekey.herokuapp.com/

## Exploit

On completing the first guess with ```rolled```, the client recieves a cookie with a link. The second answer being ```drop```, as hinted by the cookie, the client receives a third cookie which points to the next answer. On entering the third answer ```scones``` correctly, the client is presented with a final cookie named *key* and a text on the screen saying 'John absolutely hates scones! Let them rot!' along with an encrypted flag.

The flag is a rot cipher with the number of rotations correspoinding to the number of milliseconds of time at the instance when the user submits the final guess. The *key* is available from the cookie.

The flag is:
```
 wtfCTF{th15_1s_4_c00k13_g4m3}
```
