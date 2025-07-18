// Code generated by Arduino IoT Cloud, DO NOT EDIT.


#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[]           = "3092c4ee-f7e3-47d1-b2bc-7a2202685406";  //Enter THING ID
const char DEVICE_LOGIN_NAME[]  = "ce433f2b-cf0a-45ac-94be-25b44aeff92f"; //Enter DEVICE ID

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onSwitch1Change();
void onSwitch2Change();


CloudSwitch switch1;
CloudSwitch switch2;


void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(switch1, READWRITE, ON_CHANGE, onSwitch1Change);
  ArduinoCloud.addProperty(switch2, READWRITE, ON_CHANGE, onSwitch2Change);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);