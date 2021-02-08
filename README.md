# the_good_the_bad_and_the_esp32_FM_transmitter
a basic low quality ESP32 FM trasnmittor 
THIS IS A HEADS UP, using RF filters are a must when using this project or angry HAM operators will call the cops on you , i am not lieable if it happens
this project was inspered by bitluni's AM transmittor video on youtube: https://www.youtube.com/watch?v=lRXHd3HNzEo
if you want a custom audio header here is web based audio to header convevetor :https://bitluni.net/am-radio-transmitter that bitluni made

from personal exprince i get the harmonics up to 130Mhz when "7Mhz" PWM signal was used at 50% duty cycle and i tone to frequncy 101MHz to listion to it on the FM radio but using an SDR would make it allot easier to find the harmonics 


one version uses a pre made audio header while ESP32 FM ADC uses an ADC so you can connect your phone to it to play music(a pre amp is needed as the build in ADC is not sensitive enough)
