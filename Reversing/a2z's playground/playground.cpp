#include<stdio.h>
#include<iostream>
#include<string.h>
#include <cstdlib>
using namespace std;

class fun{
public:
    int freq[26];
    char reply[26];
    fun(){
        int i;
        for(i=0;i<26;i++)
        {
            freq[i]=0;
        }
        for(i=0;i<26;i++){
            reply[i]='\0';
        }
    }

    void Frequency(char str[500]){
        int l,c=0;
        l=strlen(str);
        for(c=0;c<l;c++){
            freq[str[c]-97]++;
        }
    }
    void Num2alp(int arr[]){
        int c,r=0;
        for(c=0;c<26;c++){
            r=arr[c]+96;
            if(r<97 || r>122){
                r=0;
                continue;
            }
            reply[c]=(char)r;
        }
        cout<<endl;
        for(c=0;c<26;c++){
            cout<<reply[c];
        }
    }
    void flagify(int arr[]){
        int c,t;
        char flag[26];
        int change[26]={14,12,5,-51,-17,-27,15,4,-64,-11,-7,14,-69,-15,3,-57,-46,-26,12,-15,0,-71,-10,-58,-64,8};
        for(c=0;c<26;c++){
            t=96+arr[c]+change[c];
            flag[c]=(char)t;
        }
        for(c=0;c<26;c++){
        cout<<flag[c];
        }
    }
};



int main(){
    char opt;
    char input[500];
    int last[26];
    cout<<"Welcome to the playground! Fool around and have fun :)\n";
    while(opt!='y'){
        cout<<"Would you like to play with me?(y/n)\n";
        cin>>opt;
        if(opt=='n'){
            cout<<"Wow, mean! No flag for you >:(\n";
            exit(1);
        }
        else if(opt!='y')
            cout<<"Man.....it says (y/n) so give me y or n\n";
    }
    cout<<"Yay! Now pick up some lowercase alphabets and give them to me!\n";
    cin>>input;

    fun yay;
    yay.Frequency(input);
    yay.Num2alp(yay.freq);

    cout<<"\nOh! You have to go?....okay just one last game and you can go\nGive me the numbers from the last game\n";
    int j;
    for(j=0;j<26;j++){
        cin>>last[j];
    }
    yay.flagify(last);

    return 0;
}
