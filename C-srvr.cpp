#include <stdio.h>
#include<winsock2.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
struct sockaddr_in service;
struct sockaddr_in clientname;
int len;
int main(){
	WSADATA wsadata;
	WSAStartup(MAKEWORD(2,2),&wsadata);
	SOCKET server;
	server=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	service.sin_family=AF_INET;
	system("cls");
	printf("For Server mode press s and for client mode press c!!\n");
	char t;	
	t=getch();
	switch(t){
		case 's':
				fflush(stdin);
		fflush(stdout);
	service.sin_port=htons(1313);
	service.sin_addr.s_addr=htons(INADDR_ANY);
	len=sizeof(clientname);
	bind(server,(struct sockaddr*)&service,sizeof(service));
	listen(server,3);
	printf("\t\t\t*************************\n");
    printf("\t\t\t***SERVER IS UP BABY!!***\n");
    printf("\t\t\t*************************\n");
	SOCKET acceptsocket;
	while(1)
	{
		acceptsocket=SOCKET_ERROR;
		while(acceptsocket==SOCKET_ERROR)
		{
			acceptsocket=accept(server,NULL,NULL);
		}
		server=acceptsocket;
		printf("WOW...Connection successful!!\n");
		getpeername(server,(struct sockaddr*)&clientname,&len);
		printf("Client IP:%s!\n",inet_ntoa(clientname.sin_addr));
		printf("port:%d!\n",htons(htons(clientname.sin_port)));
		printf("\n------------------------------------------------------------------------------\n");
		break;
	}
	break;
	case 'c':
fflush(stdin);
fflush(stdout);
			char address[15];
	printf("Server address-\n");
	gets(address);
	service.sin_port=htons(1313);
	service.sin_addr.s_addr=inet_addr(address);
  if (connect(server,(SOCKADDR*)&service,sizeof(service))==SOCKET_ERROR)
 {
    printf("Shit...Failed to connect.\n");
    system("timeout 2 >nul");
	exit(0);
    WSACleanup();
}
else
{
fflush(stdin); 
fflush(stdout);
	printf("\n------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------\n");
	printf("-------------------------------Welcome to C-server!!------------------------------\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------------------\n");
}
break;
      default:
      	printf("Wrong choice Babe!!\n");
      	system("timeout 3 >nul");
      	exit(0);
	}
	char recvBuf[1313];
	char c[1313];
	printf("your login name?\n");
	gets(c);
	send(server,c,sizeof(c),0);
    u_long imode=1;
    ioctlsocket(server,FIONBIO,&imode);
		int nError;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for(;;){
	memset(recvBuf,0,1313*sizeof(char));
 memset(c,0,1313*sizeof(char));
		nError=WSAGetLastError();
	if(nError!=WSAEWOULDBLOCK&&nError!=0)
	{
		system("color 07");
		printf("Disconnected from server!!\r\n");
		exit(0);
	}
		int a=kbhit();
   if(a==1)
      {
      	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE|FOREGROUND_INTENSITY);
      	printf(">>");
      gets(c);
      int b=strlen(c);
      int i;
      for(i=0;i<b;i++)
      {
      	c[i]=c[i]+1313;
      }
						send(server,c,sizeof(c),0);
					}
					if(c[0]==99&&c[1]==-102&&c[2]==-122)
					{
						printf("will disconnect now..press any key!!\n");
						getch();
						system("color 0f");
						exit(0);
					}
     a=0;
     if(recv(server,recvBuf,sizeof(recvBuf),0)!=-1)
     {
     	Beep(2600,230);
     int k=strlen(recvBuf);
     SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_INTENSITY);
    int j;
				for(j=0;j<k;j++)
				{
					printf("%c",(recvBuf[j]-1313));
				}
				printf("\n");
				}}
}
