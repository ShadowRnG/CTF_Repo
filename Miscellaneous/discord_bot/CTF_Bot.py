import os
import discord
from discord.ext import commands

#IAMGROOT

client = discord.Client()

@client.event
async def on_ready():
  print('We have logged in')

@client.event
async def on_message(mes):
  if mes.author==client.user:
    return
  
  if mes.content.startswith('Hi'):
    await mes.channel.send('Ola amigos!')

  if mes.content.startswith('flag'):
    await mes.channel.send('You have come to the right place')

  if mes.content.startswith('help'):
    await mes.channel.send('Say my name')

  if mes.content.startswith('wtf'):
    msg = 'Your flag is: etrIKT{R15v0zd_N0z_d4gh3k}' 
    await mes.author.send(msg)


my_secret = os.environ['TOKEN']

client.run(my_secret)