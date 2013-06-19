# 3D-Compass

3D compass library for Arduino using HMC5883L
If you don't have one, pick one from [Seeed Studio](http://www.seeedstudio.com/depot/grove-3axis-digital-compass-p-759.html)

## How to use
Values of x, y and z read from the compass seem to have offsets.
To calculate the offsets, rotate the compass to get minimum and maximum of x, y, and z.

	offset = (minimum + maxmum) / 2
	value = valueRaw - offset
