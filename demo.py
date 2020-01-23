def alphabet_position(letter, number):
    if len(letter) != 1:
        return -1 #Invalid input
    elif letter.isalpha() == False:
        return letter #If its not an alphabet
    else:
        ans = ord(letter) + number
        print(ans)
        # the below if-statement makes sure the value does not overflow.
        if ans > ord('z') and letter.islower():
            ans = ans - ord('z') + ord('a')
            
        elif ans > ord('Z') and letter.isupper():  
            ans = ans - ord('Z') + ord('A')
            print(ans,ord('Z'))
        return chr(ans)
print(alphabet_position('T',12))
