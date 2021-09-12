# masker

Author: [S. Sitaraman](https://github.com/hackerbone)

## Description

This challenge requires the knowledge of IP Spoofing, X-Forwarded-For header requests and how Heroku server parses header requests. The player needs to send a header payload which will be a `X-Forwarded-For` header : 'The indices I wanted to check don't match, make them match and also someone left these : 0 2 -1'.

## Challenge description to go up on the website

Mask it? https://masker.herokuapp.com/

## Exploit

Basically Heroku manipulates the X-Forwarded-For header so it's tricky to assess the header IP list for the client's IP because we don't have clarity which IP is added from the start and which one from the back. The challenge is to get the first IP, the 3rd IP and the last IP in the list of IP's in the list of IP's to be the same. Now, this is a tricky task unless you know that passing another X-Forwarded-For header request will append the IP's passed in the second header to the IP list.

Now for getting the flag:

- We know from the source code, we have to intercept the request made to `/getFlag` endpoint
- Once we intercepted the request, We need to pass this payload in the request header:

```
X-Forwarded-For: 6.9.6.9, X.X.X.X , 6.9.6.9
X-Forwarded-For: 6.9.6.9
```

If you did it right, you should get :

```
Damn, nice one you get to enjoy this : wtfCTF{just_4n0th3r_h34d3r}
```

```
The flag is wtfCTF{just_4n0th3r_h34d3r}
```
