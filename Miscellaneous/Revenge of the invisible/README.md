# Revenge of the invisible

Author: [Shaun Santosh](https://github.com/ShadowRnG)

## Description
This is an esolang challenge, language used is Whitespace. Identify the language used and put the code in a whitespace compiler to directly get the flag.

## Requirements

- Docker: [Dockerfile](./Dockerfile)

## Sources

- [hideout.ws](./hideout.ws)

They've been ignored for far too long and now they're fed up.
They decided that they needed to do something big to catch everyone's attention and so they kidnapped the flag!!
You're going to have to negotiate with them but don't worry, they aren't violent.......they just want to be understood.

Hint 1: The underscores are used for a reason

## Solution
There are a lot of hints that point towards the answer!
The extension is .ws
[Try It Online](https://tio.run/) is a site with online interpreters for all sorts of practical and recreational programming languages. It has a compiler for whitespace as well.
The line in the description that says they just want to be understood hints at the whitespaces having some extrinsic meaning to them.
The hint: the only visible string in the file has words that are separated by underscores instead of spaces meaning that again the whitespaces have some unusual importance.

To get the flag simply give the file as an input to a whitespace compiler and the output is the flag.

The flag is:
`wtfCTF{wsp4c3s_m4tt3r!}`
