/*
 Copyright (C) 2014  Cagdas Caglak cagdascaglak@gmail.com http://expcodes.blogspot.com.tr/

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
package com.cacaosd.i2cjava.core;

public class I2C {

	private byte bus;

	public I2C(byte device_address, byte bus) {
		initialize(bus);
		setDeviceAddress(device_address);
	}

	public native void setDeviceAddress(byte device_address);

	public native byte getDeviceAddress();

	public native void initialize(byte bus);

	public native void writeBit(byte register_address, byte data, byte bit_no);

	public native void writeBitNoExit(byte register_address, byte data,
			byte bit_no);

	public native void writeMoreBits(byte register_address, byte data,
			byte bit_length, byte start_bit);

	public native void writeMoreBitsNoExit(byte register_address, byte data,
			byte bit_length, byte start_bit);

	public native void writeByte(byte register_Address, byte data);

	public native void writeByteNoExit(byte register_Address, byte data);

	public native void writeByteBuffer(byte register_address, byte[] data);

	public native void writeByteBufferNoExit(byte register_address, byte[] data);

	public native void writeByteArduino(byte data);

	public native void writeByteArduinoNoExit(byte data);

	public native void writeByteBufferArduino(byte[] data);

	public native void writeByteBufferArduinoNoExit(byte[] data);

	public native byte readBit(byte register_address, byte bit_no);

	public native byte readBitNoExit(byte register_address, byte bit_no);

	public native byte readMoreBits(byte register_address, byte length,
			byte start_bit);

	public native byte readMoreBitsNoExit(byte register_address, byte length,
			byte start_bit);

	public native byte readByte(byte register_address);

	public native byte readByteNoExit(byte register_address);

	public native byte[] readByteBuffer(byte register_address, byte length);

	public native byte[] readByteBufferNoExit(byte register_address, byte length);

	public native byte[] readByteBufferArduino(byte length);

	public native byte[] readByteBufferArduinoNoExit(byte length);

	public native short readWord(byte msb_address, byte lsb_address);

	public native short readWordNoExit(byte msb_address, byte lsb_address);

}