#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char* argv[]) {
	char *pName;
	char name[100];
	int age = 0;
	char username[100];
	char *pUsername;
	printf("What is your name?:");
	scanf("%s",&name);
	pName = (char *)malloc(strlen(name)+1);
	memcpy(pName,name,strlen(name));
	pName[strlen(name)] = '\0';
	printf("\nWhat is your age?:");
	scanf("%d",&age);
	printf("\nWhat is your username?:");
	scanf("%s",&username);
	pUsername = (char *)malloc(strlen(username)+1);
	memcpy(pUsername,username,strlen(username));
	pUsername[strlen(username)] = '\0';
	printf("Your name is %s, you are %d years old, and your username is %s\n",pName,age,pUsername);
	
	return 0;
}

	