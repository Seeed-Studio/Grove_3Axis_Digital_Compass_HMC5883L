/*****************************************************************************/	
//	Function:	 Header file for HMC5883L
//  Hardware:    Grove - 3-Axis Digital Compass
//	Arduino IDE: Arduino-1.0
//	Author:	 Frankie.Chu		
//	Date: 	 Jan 10,2013
//	Version: v1.0
//	by www.seeedstudio.com
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
//
/*******************************************************************************/

#ifndef __HMC5883L_H__
#define __HMC5883L_H__

#include <Arduino.h>
#include <Wire.h>



#define HMC5883L_ADDRESS 0x1E
#define CONFIGURATION_REGISTERA 0x00
#define CONFIGURATION_REGISTERB 0x01
#define MODE_REGISTER 0x02
#define DATA_REGISTER_BEGIN 0x03

#define MEASUREMENT_CONTINUOUS 0x00
#define MEASUREMENT_SINGLE_SHOT 0x01
#define MEASUREMENT_IDLE 0x03

#define ERRORCODE_1 "Entered scale was not valid, valid gauss values are: 0.88, 1.3, 1.9, 2.5, 4.0, 4.7, 5.6, 8.1"
#define ERRORCODE_1_NUM 1

struct MagnetometerScaled
{
	float XAxis;
	float YAxis;
	float ZAxis;
};

struct MagnetometerRaw
{
	int XAxis;
	int YAxis;
	int ZAxis;
};

class HMC5883L
{
	public:
	  HMC5883L();

	  MagnetometerRaw readRawAxis();
	  MagnetometerScaled readScaledAxis();
  
	  int setMeasurementMode(uint8_t mode);
	  int setScale(float gauss);

	  char* getErrorText(int errorCode);

	protected:
	  void write(int address, int byte);
	  uint8_t* read(int address, int length);

	private:
	  float m_Scale;
};

#endif