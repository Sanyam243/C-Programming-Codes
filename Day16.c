#include <stdio.h>
#include <string.h>

int isUpper(char c)
{

    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }

    return 0;
}

int isLower(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;
    }

    return 0;
}
int isVowel(char c)
{

    if (isUpper(c))
    {
        int val = c - 'A';
        c = 'a' + val;
    }

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isPalindrome(char s[]){
    int n = strlen(s);

    int i=0;
    int j =n-1;

    while(i<j){
        if(s[i]!=s[j]){
            return 0; //False
        }
        i++;
        j--;
    }
    return 1; //True
}

void countFrequency(char s[]){
    int count[26];
    for(int i=0;i<26;i++){
        count[i]=0;
    }

    int n = strlen(s);

    for(int i=0;i<n;i++){
        int index = s[i]-'a';
        count[index]++;
    }
    for(int i=0;i<26;i++){
        
        if(count[i]>0){
            char c = 'a'+i;
            printf("Frequency of %c is %d\n",c,count[i]);
        }
    }
}

int main()
{

    char s[50];
    scanf("%s", s);

    int vowel = 0;
    int consonant = 0;

    int n = strlen(s);
    printf("%d",strlen(s));
    for (int i = 0; i < n; i++)
    {

        if (isLower(s[i]) || isUpper(s[i])) //Checking whether the character is alphabet or not
        {
            if (isVowel(s[i])) // Character is vowel or not
            {
                vowel++; // Increase the count by 1 of vowels
            }
            else
            {
                consonant++;
            }
        }
    }

    //printf("%d vowels %d consonants",vowel,consonant);
    countFrequency(s);
}