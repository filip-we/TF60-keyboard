# Build Process

## Preparations
### Testing
The PCB was connected to my computer and I opened a keyboard testing-website. With a tweezer I tested to short all the paris of switch connections on the PCB. The results were that most of the pairs worked. The ones that did not were keys that were only present on the ANSI-layout.

### Determining the layout
The PCB supports both ANSI- and ISO-layouts. This means that under all possible layouts there will be pairs of switch connections that will not be used. If I counted correctly there are 107 pairs of connections (or possible switch locations). I only have hot-swap sockets for 75 keys. 
Placing the plate on top of the PCB helps understanding which connections are for ANSI and which ones are for ISO respectively. I have thus concluded the location of all keys on the first to the fourth row, a total of 52 keys. That leaves 23 pairs of hot-swap sockets for the bottom row. They have 30 pairs, but most of them are not usable simultaneously.

### Keycaps needed
KB-republic
- SA-Crisis Alpha, 28.60 USD
- SA-Crisis Modifier, 27.20 USD
- SA-Crisis Grey minibars, 9.20 USD
- SA-Crisis Norde, 22.80 USD
- SA-Crisis Numpad, 19.90 USD
Sum: 107.70 USD
https://kprepublic.com/collections/domikey/products/domikey-sa-abs-doubleshot-keycap-set-crisis-sa-profile-for-mx-stem-keyboard?variant=31528483717213

### Building the QMK-firmware
There is two predefined layouts for the "TS60" as the proper name is (it is printed on the PCB). To match ANSI and split space bar I needed to add my own "layout" or configuration of keys.
