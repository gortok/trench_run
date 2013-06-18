import serial


BAUD_RATE = 9600
DEVICE_PORT = '/dev/ttyACM0'


def listen():
	ser = serial.Serial(DEVICE_PORT, BAUD_RATE)

	while 1:
		