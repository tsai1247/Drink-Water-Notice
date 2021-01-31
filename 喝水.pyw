import requests
import smtplib
import time
import ctypes  # An included library with Python install.
def main():
	while True: 
		fr = open('喝水間隔.txt', 'r', encoding="utf-8")
		text = fr.readline().split(":")
		fr.close()
		hr = int(text[0])
		min = int(text[1])
		sec = int(text[2])
		ctypes.windll.user32.MessageBoxW(0, "給我喝水喔", "喝水通知", 1)
		time.sleep(hr*3600+min*60+sec)
		
if __name__=="__main__":
	main()