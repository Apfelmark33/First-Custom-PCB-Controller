# Pathfinder 

A custom, password-protected PCB controller board that acts as a digital combination lock system. It's essentially a safe but without anything in it (yet). 

I used KICad to make the pbc and the arduino IDE for the code.


---

##  Project Overview

How it Works
Pathfinder is a simple electronic lock system that uses 3 buttons to enter a password. As you press the buttons, LEDs light up to show your progress, and a small speaker (piezo buzzer) plays different sounds to let you know if your password was right or wrong.

Key Features
Smart Code Checking: Instead of just adding numbers together (where the order doesn't matter), the board remembers the exact sequence of your button presses. If your password is "abc", typing "cba" won't open it!

Every time you press a button, an LED turns on. By the third press, all three LEDs light up so you know you've entered the full 3-character code (a 3 character code is necessary but it can always be changed in the firmware)

Sound Alerts: The system talks to you through sound (so you know it works). It plays a happy, double-beep if you get the password right, and a low, buzzing tone if you get it wrong (room for improvement).




## Schematic

<img width="550" height="452" alt="Screenshot 2026-06-24 200725" src="https://github.com/user-attachments/assets/6000b395-28be-4a82-ba26-23fc94004ce0" />


## PCB

<img width="550" height="452" alt="Screenshot 2026-06-24 200725" src="https://github.com/user-attachments/assets/dabb6e7f-fdcb-4b8f-8383-e769427f3c0c" />


## 3D Model

<img width="485" height="286" alt="Screenshot 2026-06-24 200940" src="https://github.com/user-attachments/assets/ae1a1092-1d98-4760-b5dd-17b733582bae" />


---
