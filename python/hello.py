import sys

def hello():
	print("HELLO WORLD")

def welcome():
	print("WELCOME")

def main():
	if(sys.argv[1] == 'hello'):
		hello()
	else:
		welcome()

if __name__ == '__main__':
        main()
