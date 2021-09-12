# wtf-CTF

<!-- TABLE OF CONTENTS -->
## Table of Contents

- [Table of Contents](#table-of-contents)
- [About The Project](#about-the-project)
- [Getting Started](#getting-started)
  - [Installation](#installation)
- [Template](#template)
  - [Flag Format](#flag-format)
  - [Directory Structure](#directory-structure)
  - [Template for Challenge README](#template-for-challenge-readme)



<!-- ABOUT THE PROJECT -->
## About The Project

This is a repository to store CTF challenges to be deployed for `wtf-CTF`.

<!-- GETTING STARTED -->
## Getting Started

> Note: DO NOT PLAGIARIZE challenges from other CTFs. You can take inspiration but not have the exact same challenge.

The following are the categories of challenges that are to be made:

- Pwn
- Web
- Crypto
- Reversing
- Miscellaneous

### Installation

1. Clone the repo
```sh
git clone https://github.com/nithinchowdary007/wtf-CTF.git
```
2. Create a branch with your name
```sh
git checkout -b <your-name>
```
3. Only push your code to your branch.
4. Once the question is ready, create a pull request to merge it to master.

## Template

### Flag Format

- The flags must be enclosed in `wtfCTF{}`.
- They can have numbers, alphabets, `_`s, `'`s, `!`s, `.`s, `+`s, `-`s, `@`s, `#`s, `$`s, `%`s, `:`s, `>`s.
- They must be related to the challenge.
- They must not be so simple that you can guess them.

Here's a sample flag.

```
wtfCTF{th1s_i5_4_s4mpl3_fl4g}
```

### Directory Structure

The following are guidelines for creating challenge folders.

- Each challenge has it's own folder, which is placed in the relevant directory amongst the ones enlisted above.
- Each challenge **must** have a `README.md` file describing how to solve the challenge, along with the relevant code / files that needs to be run / deployed on the server.
- The flag must be present in the `README.md` for the challenge.
- We prefer having each challenge in it's own docker container, so that it's simple to deploy.

```
- pwn/
  - binary exp/
    - static/
      - img1.png
    - README.md
    - binary-exp
    - binary-exp.c
    - Dockerfile
- web/
  - inject/
    - README.md
    - inject.php
    - Dockerfile
```



### Template for Challenge README

As mentioned earlier, each challenge requires a `README`. The README must be written in such a way that this can serve as an **official write-up** later. This should have the following format.

```
# Challenge Name

Author: [author](https://github.com/author)

## Description

Brief Description about challenge

## Requirements

- Docker: [Dockerfile](./Dockerfile)

## Sources

- [sample.py](./sample.py)
- [sample.txt](./sample.txt)

<!-- Remove this comment, and the '\' before '```' -->
\```
Challenge description to go up on the website.

Hint 1: If any - Points 100
Hint 2: If any - Points 200
\```

## Exploit

<!-- Much more detailed description than the following. -->
Reverse `sample.py` to decrypt the flag in `sample.txt.`
<br />

The last line should be the flag.
<br />

The flag is:

\```
wtfCTF{some_flag_here}
\```
```
