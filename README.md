#DIY Di2

This is my interpretation of electronic shifting for front and rear shifting of a bicycle.
I'll be adding functionality in freetime. This repo will include my sketches for 3D-printed 
servo mounts for both the front and rear derailler. It will also include my code for the 
shifting logic.

For my microcontroller, I am using a 5v 16 MHz Pro Trinket(Atmega328P chip) from Adafruit.

###ADVANTAGES####:
* Low cost compared to off-the-shelf electronic groupsets
* Improved, simplified shifting logic to mechanical systems. Similar to SRAM ETap
* Never have to replace cable as in mechanical systems

####EXTENDED FEATURES####:
* LCD display of current gear
* Compute current gear ratio by hardcoding amount of gear teeth on each cog
* Include an accelerometer to track speed
* Autoshift, making a wise decision based on speed, to maintain an ideal cadence 

![](https://github.com/scmilburn/DIY_Di2/img/front.jpg)
front derailleur
![](https://github.com/scmilburn/DIY_Di2/img/rear.jpg)
rear derailleur 

<git clone https://github.com/scmilburn/DIY_Di2.git>

Simon Milburn 2015
