#include <ArduinoBLE.h>

long previousMillis = 0;
int interval = 0;
int ledState = 0;

BLEService ledService("180A");  // BLE LED Service

// BLE LED Switch Characteristic - custom 128-bit UUID, read and writable by central
BLEByteCharacteristic switchCharacteristic("2A57", BLERead | BLEWrite);

void setup() {
  // Serial.begin(9600);
  // while (!Serial)
  ;

  // set built in LED pin to output mode
  pinMode(6, OUTPUT);

  // begin initialization
  if (!BLE.begin()) {
    // Serial.println("starting Bluetooth® 0 Energy failed!");

    while (1)
      ;
  }

  // set advertised local name and service UUID:
  BLE.setLocalName("Nano 33 IoT TRILMOTOR");
  BLE.setAdvertisedService(ledService);

  // add the characteristic to the service
  ledService.addCharacteristic(switchCharacteristic);

  // add service
  BLE.addService(ledService);

  // set the initial value for the characteristic:
  switchCharacteristic.writeValue(0);

  // start advertising
  BLE.advertise();

  // Serial.println("BLE LED Peripheral");
}

void loop() {
  // listen for BLE peripherals to connect:
  BLEDevice central = BLE.central();

  // if a central is connected to peripheral:
  if (central) {
    // Serial.print("Connected to central: ");
    // print the central's MAC address:
    // Serial.println(central.address());

    // while the central is still connected to peripheral:
    while (central.connected()) {
      // if the remote device wrote to the characteristic,
      // use the value to control the LED:
      if (switchCharacteristic.written()) {
        switch (switchCharacteristic.value()) {  // any value other than 0
          case 01:
            // Serial.println("LED on");
            analogWrite(6, 255);  // will turn the LED on
            break;
          case 02:
            // Serial.println("LED fast blink");
            analogWrite(6, 255);  // will turn the LED on
            delay(500);
            analogWrite(6, 0);  // will turn the LED off
            delay(500);
            analogWrite(6, 255);  // will turn the LED on
            delay(500);
            analogWrite(6, 0);  // will turn the LED off
            break;
          case 03:
            // Serial.println("LED slow blink");
            analogWrite(6, 255);  // will turn the LED on
            delay(1000);
            analogWrite(6, 0);  // will turn the LED off
            delay(1000);
            analogWrite(6, 255);  // will turn the LED on
            delay(1000);
            analogWrite(6, 0);  // will turn the LED off
            break;
          case 04:
            // Serial.println("LED slow blink");
            analogWrite(6, 100);  // will turn the LED on
            delay(400);
            analogWrite(6, 255);  // will turn the LED on
            delay(300);
            analogWrite(6, 0);  // will turn the LED off
            delay(800);
            analogWrite(6, 100);  // will turn the LED on
            delay(400);
            analogWrite(6, 255);  // will turn the LED on
            delay(300);
            analogWrite(6, 0);
            break;
          case 05:
            // Serial.println("LED s0 blink");
            analogWrite(6, 100);  // will turn the LED on
            delay(200);
            analogWrite(6, 255);  // will turn the LED on
            delay(100);
            analogWrite(6, 0);  // will turn the LED off
            delay(300);
            analogWrite(6, 100);  // will turn the LED on
            delay(200);
            analogWrite(6, 255);  // will turn the LED on
            delay(100);
            analogWrite(6, 0);
            break;
          case 06:
            // Serial.println("LED s0 blink");
            analogWrite(6, 255);  // will turn the LED on
            delay(250);
            analogWrite(6, 150);  // will turn the LED on
            delay(200);
            analogWrite(6, 0);  // will turn the LED off
            delay(300);
            analogWrite(6, 255);  // will turn the LED on
            delay(250);
            analogWrite(6, 150);  // will turn the LED on
            delay(200);
            analogWrite(6, 0);
            break;
          case 07:
            // Serial.println("LED s0 blink");
            analogWrite(6, 150);  // will turn the LED on
            delay(150);
            analogWrite(6, 255);  // will turn the LED on
            delay(300);
            analogWrite(6, 150);  // will turn the LED on
            delay(150);
            analogWrite(6, 0);  // will turn the LED off
            delay(300);
            analogWrite(6, 150);  // will turn the LED on
            delay(150);
            analogWrite(6, 255);  // will turn the LED on
            delay(300);
            analogWrite(6, 150);  // will turn the LED on
            delay(150);
            analogWrite(6, 0);
            break;
          case 8:
            // Serial.println("LED fast blink");
            analogWrite(6, 255);  // will turn the LED on
            delay(100);
            analogWrite(6, 0);  // will turn the LED off
            delay(100);
            analogWrite(6, 255);  // will turn the LED on
            delay(100);
            analogWrite(6, 0);  // will turn the LED off
            delay(100);
            analogWrite(6, 255);  // will turn the LED on
            delay(100);
            analogWrite(6, 0);  // will turn the LED off
            delay(100);
            analogWrite(6, 255);  // will turn the LED on
            delay(100);
            analogWrite(6, 0);  // will turn the LED off
            delay(100);
            analogWrite(6, 255);  // will turn the LED on
            delay(100);
            analogWrite(6, 0);  // will turn the LED off
            delay(100);
            analogWrite(6, 255);  // will turn the LED on
            delay(100);
            analogWrite(6, 0);  // will turn the LED off
            delay(100);
            analogWrite(6, 255);  // will turn the LED on
            delay(100);
            analogWrite(6, 0);  // will turn the LED off
            delay(100);
            analogWrite(6, 255);  // will turn the LED on
            delay(100);
            analogWrite(6, 0);  // will turn the LED off
            delay(100);
            analogWrite(6, 255);  // will turn the LED on
            delay(100);
            analogWrite(6, 0);  // will turn the LED off
            break;
          default:
            // Serial.println(F("LED off"));
            analogWrite(6, 0);  // will turn the LED off
            break;
        }
      }
    }

    // when the central disconnects, print it out:
    // Serial.print(F("Disconnected from central: "));
    // Serial.println(central.address());
    analogWrite(6, 0);  // will turn the LED off
  }
}