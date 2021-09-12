# Challenge Name:
Finding Nemo

Author Name: Shrenik Kalambur

# Challenge Description:

Can you help Nemo find the flag? Nemo loves a challenge. And a flag.
https://hub.docker.com/r/madjelly8504/ctf_challenge

# Detailed Description:

The docker image runs Arch linux within it, so all basic unix commands work. 

The image can be started with the following command:
docker run -d --tty --name <Optional Name> -p <Optional port> <Image name>

The command
docker exec -it <Image ID> bash 
will open up an interactive terminal that you can use to access the contents of the container.

The flag is hidden in the file .flag.txt, which in turn is within:
./usr/lib/python3.9/site-packages/libmount/cache/data/text/12.12.2021/strings/challenge_dir/.flag.txt
find ./usr -name .flag.txt can be used to locate the file

Flag: wtfCTF{4rch_1s_fun}  
  
Hint: (For 20 points) : "You're looking for a hidden .txt file"
