# Ardguino Handbrake
A simple loadcel handbrake using analog port A0 on the Arduino Leonardo or pro micro. I was using a Leo Bodnar load cell and and a 10kg Load cell for the handbrake connected to a old handbrake I bought off ebay withtension spring connecting the handbrake and loadcell which provides a reasonable tension to trigger the loadcell. 

Components:
1. Pro micro 5v or Arduino Leonardo
2. Leo Bodnar LC Amp (http://www.leobodnar.com/shop/index.php?main_page=product_info&products_id=199, but you can also the hx711 loadcell amp, but then you will need to also get the HX711 library and use the Scale components)
3. 10kg Loadcell (https://www.auselectronicsdirect.com.au/10kg-load-cell-weight-sensor-module-for-electronic?gclid=CjwKCAjwtNf6BRAwEiwAkt6UQmXRqe5vAvDcwMbBJ83KXV_Gl0yyghbbRfgOBqyKuSCneJVWAvRH5hoCDMoQAvD_BwE)
3. Tension spring (most of these should do the job, just check one that aroun 5-10kg tension https://www.bunnings.com.au/our-range/building-hardware/general-hardware/springs/extension-springs)
4. Handbrake (something like this .. https://www.ebay.com.au/itm/Hand-Brake-Nissan-Pathfinder-2001/223034401461?hash=item33ede2e2b5:g:CbkAAOSwbVNbMxrA. I got one for $25)
Bracket to mount the handbrake (just make my own from spare wood and stuff)

if you are running multiple arduino's remember to assign a different device ID to the Joystick to that you can sell all devices.
I used 0x09 below. don't go anything below 0x06 as it will start getting into the built in joystick,keyboard and mouse identifiers)
Joystick_ Joystick(0x09,
                   JOYSTICK_TYPE_JOYSTICK, 0, 0,
                   false, false, false, false, false, false,
                   false, false, false, true, false);
