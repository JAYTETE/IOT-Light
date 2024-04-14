

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPL3rYM6eGMF"
#define BLYNK_TEMPLATE_NAME "iot project"
#define BLYNK_AUTH_TOKEN "_0xt1Hb3QBlUNL9VOkMifnGf47Mn57iV"


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "JAY";
char pass[] = "87654321";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run(); // connect led pins to gnd and 
}

