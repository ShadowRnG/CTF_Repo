# a2z's playground

Author: [Shaun Santosh](https://github.com/ShadowRnG)

## Description

A reversing challenge intended to be solved using dynamic analysis.

## Requirements

- Docker: [Dockerfile](./Dockerfile)

## Sources

- [a2z's playground](./playground)

a2z is a happy little kid in a program. 
He's like any other kid and he likes playing games, candy, comic books, frequency, puppies, balloons and ice cream like any other normal kid. 
He also likes a particular string "ihavealotoffunplayingwithu". See if you can win his favour and get the flag.

Hint 1: In the first game, try out strings of repeated lowercase alphabets and notice the output.

## Solution
The challenge is intended to be solved using dynamic analysis.        
The program is split into 2 "games" and technically 3 parts.

The 2 games are simple enough.       
In the first game, a2z asks for an input of lowercase alplhabets and expects the same.        
In the second game, a2z expects an input of 26 integers.       
All of this can be derived from the execution of the program.      

The 3 parts that it is split into can be uncovered by viewing the decompilation through a tool of your choice.     
There are 3 main functions: _Frequency, Num2alph_ and _flagify._      
The name also hints at what the program could be doing, from character(a) to integer(2) and back to character(z).     

The first 2 parts are what comprise the first game and goes as follows:    
a2z takes your input of lowercase alphabets and serves it as an input to _Frequency_ which gives an output of an array with 26 integers.    
Each of these 26 integers is the frequency of the corresponding alphabet (1st int is freq of a and 26th is that of z).     
The output of Frequency is then given as input to Num2alp which takes integer and converts it to the corresponding location in the alphabet(1 is 'a' and 26 is 'z')    
Note: The size of the output array is easy to determine as a simple '\n' will give you 26 blanks(`_`) and furthermore the size should hint at what could be going on in the functions.     
Experimenting with the program should confirm any theories.    
To get the required answer, find the input required for a2z to give "ihavealotoffunplayingwithu" as the output.    

The second game is very easy once the first game is understood, simply give the array of 26 integers used to get the correct output in the first game.    
Once the correct array is provided, flagify will output the flag.    

The flag is:
`
wtfCTF{s4d_t0_s33_u_g0_:(}
`
