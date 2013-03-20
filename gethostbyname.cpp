#include <stdio.h>
#include <winsock2.h>
int main()
{
	WSADATA w;
	WSAStartup(MAKEWORD(2,2),&w);
struct hostent *h;
h=gethostbyname("www.rgu.ac.uk");
printf("Host name : %s\n", h->h_name);
printf("IP Address : %s\n", inet_ntoa(*((struct in_addr *)h->h_addr)));
return 0;
}
