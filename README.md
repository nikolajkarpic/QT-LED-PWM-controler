# QT-LED-PWM-controler
School project, where a RGB led diode is controled via Raspberry Pi running a QT program

## Components used
Main component of this poject is SBC (single board computer) Raspberry Pi 2B, which is used to run QT program to control the led. 
Where led can be replaced with three transistors conceted to separate power suply which in turn can drive led strips.

![rPI](https://raspi.tv/wp-content/uploads/2016/11/Pi2B-1.2_700.jpg)

## Brief introduction to Pulse width modulation
Pulse-width modulation (PWM), or pulse-duration modulation (PDM), is a method of reducing the average power delivered by an electrical signal, by effectively chopping it up into discrete parts. The average value of voltage (and current) fed to the load is controlled by turning the switch between supply and load on and off at a fast rate. The longer the switch is on compared to the off periods, the higher the total power supplied to the load. Along with maximum power point tracking (MPPT), it is one of the primary methods of reducing the output of solar panels to that which can be utilized by a battery.[1] PWM is particularly suited for running inertial loads such as motors, which are not as easily affected by this discrete switching, because their inertia causes them to react slowly. The PWM switching frequency has to be high enough not to affect the load, which is to say that the resultant waveform perceived by the load must be as smooth as possible. 

PWM signal:


![pwm](https://upload.wikimedia.org/wikipedia/commons/b/b8/Duty_Cycle_Examples.png)

## Instalation
### OS instalation
To get the project running we need to install OS on our Raspberry Pi. To do so, we need to download our prefered OS, and etcher for the SD card.

Follow a guide on this [site](https://www.raspberrypi.com/software/). 

### Libaries needed

First run these following commands.
```
sudo apt-get update
```
```
sudo apt-get upgrade
```
Then install the wiring Pi libary needed to create PWM signals.
```
sudo apt-get install wiringpi
```
To check wether the libary is instaled run
```
gpio -v
```

### QT instalation

To run this project QT creation software is needed.

```
sudo apt-get install qt5-default
```

```
sudo apt-get install qtcreator
```

After the instalation is done, you will need to set up compiler in the QT creaton software.




