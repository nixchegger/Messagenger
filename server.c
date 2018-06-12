#include <stdlib.h>
#include <stdio.h>

#define BUFFSIZE	200
#define MQCLEAR		"Start"	//Anfangswert in MQ, wenn sie bereit ist
#define SERVER		1000

typdef struct{
		long receiver;	//Sender der Nachricht
		char msgtext[BUFFSIZE];	//Nachricht mit Greosse 200
}	message_t

int msg;	//Kennung spaeter ueber aufruf von Client definirbar

void start(){
	message_t send;
	send.receiver=(long)receiver;	//who gets the message
	strcpy(send,data, MQCLEAR);
	msgsnd(msg,&send,BUFFSIZE,0);
}

int main(void){
	msg=msget(IPC_PRIVATE, 0660);
	start();
}