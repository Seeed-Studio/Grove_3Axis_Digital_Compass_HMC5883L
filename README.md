3 Axis Digital Compass Library
------------------------------

This is an Arduino library for Grove - 3-Axis Digital Compass(HMC5883L) from Seeed Studio.

[![Compass](http://www.seeedstudio.com/depot/images/product/axis%20compass.jpg)](http://www.seeedstudio.com/depot/grove-3axis-digital-compass-p-759.html)

### How to use
Values of x, y and z read from the compass seem to have offsets.
To calculate the offsets, rotate the compass to get minimum and maximum of x, y, and z.
```
offset = (minimum + maxmum) / 2
value = valueRaw - offset
```

For more information, please refer to [wiki page](http://garden.seeedstudio.com/index.php?title=Twig_-_3-axis_Compass_v1.0b).

    
----

This software is written by Seeed Studio<br>
and is licensed under [The LGPL License V2.1](http://www.gnu.org/licenses/lgpl-2.1.html). 

Contributing to this software is warmly welcomed. You can do this basically by<br>
[forking](https://help.github.com/articles/fork-a-repo), committing modifications and then [pulling requests](https://help.github.com/articles/using-pull-requests) (follow the links above<br>
for operating guide). Adding change log and your contact into file header is encouraged.<br>
Thanks for your contribution.

Seeed Studio is an open hardware facilitation company based in Shenzhen, China. <br>
Benefiting from local manufacture power and convenient global logistic system, <br>
we integrate resources to serve new era of innovation. Seeed also works with <br>
global distributors and partners to push open hardware movement.<br>





[![Analytics](https://ga-beacon.appspot.com/UA-46589105-3/Grove_3Axis_Digital_Compass)](https://github.com/igrigorik/ga-beacon)
