#include<stdio.h> #define capacity 20 int event[capacity];
int eventblocked[capacity]; int eventId=0;
int doeventopen(){

//creates a new event, returning eventId on success, - 1 on failure if(eventId!=capacity)

if(eventId!=capacity)
{
event[eventId]=1; eventId++;
return eventId;
}

else return -1;
}
int doeventclose(int eventId){


//Destroy the event with the given eventId and signal any processes waiting on the event to leave the event. Return number of processes signalled on success and -1 on failure.

if(event[eventId]==1

 
{





}

else
 


event[eventId]=0; return eventId--;
 

return -1;
 
}


int doeventwait(int eventId){

//Blocks the processes until the event is signalled. Return 1 on success and - 1 on failure.
if(eventId<=capacity&&eventId>=0)

{

eventblock[eventId]=1; return 1;

}

else return -1;
}



int doeventsig(int eventId){

//Unblocks all waiting processes; ignored if no processes are blocked.
Return number of processes signalled on success and -1 on failure.
if(eventId<=capacity&&eventId>=0)
{
eventblocked[eventId]=0; return 1;

}else


return -1;

}
 
int main(){

for(int i=0;i<23;i++)

{
int k=doeventopen(); if(k!=1)	//success
{

printf("Process created successfully with event ID : %d\n",k);

}

else	//failure

{

printf("Process failed to create\n");

}

}



for(int i=1;i<24;i++)

{
int k=doeventclose(i); if(k!=1)	//success
{

printf("Process closed successfully with event ID : %d\n",k);

}

else	//failure

{

printf("Process failed to close\n");

}

}
 
for(int i=1;i<23;i++)

{

int k=doeventwait(i);

if(k!=-1) //blocked event successfully

{

printf("process blocked successfully\n");

}
else //failed to block the process printf("process failed to block \n");
}



for(int i=1;i<23;i++)

{

int k=doeventsig(i);

if(k!=-1) //Unblocked event successfully

{

printf("process unblocked successfully\n");

}
else //failed to unblock the process printf ("process failed to unblock\n");

}
int n,m; printf("***************************\n"); printf("Please enter your choice:\n"); printf("1. Create new event\n");
printf("2. Close the event with eventID\n"); printf("3. Block an event with eventID\n"); printf("4.Unblock an event with eventID\n"); printf("5. Check Whether an event is closed\n"); printf("6.Check if an event is blocked\n");
 
printf("************************"); switch(n)
{
case 1:



if(doeventopen()!=1)	// success
{

printf("Process created successfully\n");

}

else	//failure

{

printf("Process failed to create\n");

}

break;

case 2:

printf("Please enter eventID(1 to 20):\n"); scanf("%d",&m);
if(m<1||m>20){

printf(""I already said eventID should be between 1 to 20\n");break;} if(doeventclose(m)!=-1)	//Success
{

printf("Process closed successfully\n");

}

else	//failure

{

printf("Process failed to close\n");
 
printf("Try opening an event before closing it!\n");

}
break; case 3:
printf("Please enter eventID(1 to 20):\n); scanf("%d",&m);
if(m<1||m>20){
printf("I already said eventID should be 1 to 20\n");break;}
if(doeventwait(m)!=1)	//blocked event successfully

{

printf("Process blocked successfully\n);

}

else //failed to block the process printf("Process failed to block\n"); break;

case 4:

printf("Please enter eventID(1 to 20):n"); scanf("%d,&m);
if(m<1||m>20){

printf("I already said eventID should be between 1 to 20\n");break;}
if(doeventsig(m)!=-1 // Unblocked event successfully
 
{

printf("Process Unblocked successfully");

}

else //failed to unblock the process printf("process failed to unblock"); break;

case 5:

printf("Please enter eventID(1 to 20):\n"); scanf("%d,&m);
if(m<1||m>20){

printf("I already said eventID should be between 1 to 20\n");break;}
if(event[m]!=1)

{

printf("No the event is not closed\n");

}

else

printf("Yes the event is closed\n"); break;

case 6:

printf("Please enter eventID(1 to 20):\n"); scanf("%d,&m);
if(m<1||m>20){
 
printf("I already said eventID should ne between 1 to 20\n");break;}
if(eventblocked[m]!=1)

{

printf("No the event is not blocked\n");

}

else

printf("Yes the event is blocked"\n); break;
}

return 0;

}

