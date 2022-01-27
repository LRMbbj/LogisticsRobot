#include "esp8266.h"

#define SSID 0
#define PASSWORD 0
#define CHANNEL 1
#define IP "192.168.100.1"
#define PORT 8080

char rxstr[200];

void ESPInit()
{
    printf("AT+RST\r\n");
    delay(10);
    printf("AT+CWMODE=3\r\n");
    delay(10);
    printf("AT+CWSAP=%s,%s,1,3\r\n", SSID, PASSWORD);
    delay(10);
    printf("AT+CIPSTART=%d,\"UDP\",\"%s\",%d,8266,0\r\n", CHANNEL, IP, PORT);
    delay(10);
}

void ESPReceiveString(char *str)
{
    printf("Receive Done!");
    str = rxstr;
}

void ESPSendString(char *str,int len)
{

    printf("AT+CIPSEND=%d,%d", CHANNEL, len);
    delay(10);
    printf(str);
}
