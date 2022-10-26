#A command line tool that can be used to generate a random password
#the tool will generate a password of a given length

import random
import string

def generate_password(length):
    return ''.join(random.choice(string.ascii_letters + string.digits) for _ in range(length))

print(generate_password(10))
