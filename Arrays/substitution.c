//Encryption program
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool validate(string cipherkey);

//input cypher when running program
int main (int argc, string argv[])
{
    //check to make sure cipher was included
    if (argc == 2)
    {
        string cipherkey = argv[1];
        //check if cipher is 26 letters
        if (validate(cipherkey) == true)
        {
            //get text to convert
            string a = get_string("plaintext: ");
            
            int count = strlen(a);
            
            char cipher[count];
            //input standard alphabet
            string abc = "abcdefghijklmnopqrstuvwxyz";
            //match case for each letter and cipher text
            for (int i = 0; i < count; i++)
            {
                if (isupper(a[i]) != 0)
                {
                    for (int j = 0; j < 26; j++)
                    {
                        if(abc[j] == tolower(a[i]))
                        {
                            cipher[i] = toupper(cipherkey[j]);
                            break;
                        }
                    }
                }
                else if (islower(a[i]) != 0)
                {
                    for (int j = 0; j < 26; j++)
                    {
                        if(abc[j] == a[i])
                        {
                            cipher[i] = tolower(cipherkey[j]);
                            break;
                        }
                    }
                }
                else
                {
                    cipher[i] = a[i];
                }
            }
            //print the cipher text
            printf("Cipher: %s\n", cipher);
            return 0;
        }
        //prompt for correct input
        else printf("Usage: ./substitution 26 character key \n");
    }
    //prompt for correct input
    else printf("Try again.\n");
}


//validate the entered cipher key
//must be 26 non-repeating characters
bool validate(string cipherkey)
{
    int x = 0;
    if (strlen(cipherkey) == 26)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            for (int i = 0; i < 26; i++)
            {
                if(tolower(cipherkey[i]) == c)
                {
                    x++;
                    break;
                }
            }
        }
        if(x == 26)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}