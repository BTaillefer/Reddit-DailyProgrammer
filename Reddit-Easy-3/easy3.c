#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, const char* argv[]){
	char originalMessage[100];
	char *pMessage;
	int messageLength = 0;
	char currentChar;
	int i = 0;
	int shift = 0;
	int j=0;
	if(argv[2]) {
		strncpy(originalMessage,argv[1],strlen(argv[1]));
		shift = (int)argv[2][0] - '0';
	}
	else {
		printf("Please enter command line argument\n");
		return 0;
	}
	messageLength = strlen(argv[1]);
	originalMessage[messageLength] = '\0';
	for(i=0;i<=messageLength-1;++i){
		if(isalpha(originalMessage[i])) {
			while(j < shift) {
				switch(originalMessage[i]) {
				case 'z':
					originalMessage[i] = 'a';
					break;
				case 'Z':
					originalMessage[i] = 'A';
					break;
				default:
					originalMessage[i] = originalMessage[i] + 1;
				}
			j++;
			}
			j=0;
		}
	}
	printf("Encrypted message: \t\t %s\n",originalMessage);

	for(i=0;i<=messageLength-1;++i){
		if(isalpha(originalMessage[i])) {
			while(j < shift) {
				switch(originalMessage[i]) {
				case 'a':
					originalMessage[i] = 'z';
					break;
				case 'A':
					originalMessage[i] = 'Z';
					break;
				default:
					originalMessage[i] = originalMessage[i] - 1;
				}
				j++;
			}
			j=0;
			
		}
	}
	printf("Decrypted message: \t\t %s\n",originalMessage);
}
