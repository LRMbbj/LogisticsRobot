#ifndef __ESP8266_H__
#define __ESP8266_H__

extern char rxstr[200];

void ESPInit();
void ESPReceiveString(char *str);
void ESPSendString(char *str);

#endif