# ass 1 B:
**step 1**: What is the forward voltage across the diode at the maximum forward current? : **80ma**

**step 2**:  
Vtyp = 2,4V, Vmax = 3; Imax = 30mA =>  
V<sub>R1</sub> > 7 V;  => R1 > 7/0.03 > 233 Ohm

**step 4**:   
messured V over LED: 5*4/10 = 2V \(R=330 => I=3V/330=0.009=9mA \)  
rel luminous intensity: .9 at 9mA
to halve the intensity: .45 at 5.8 mA  
Thus R<sub>total</sub>=5/0.0058=862, V<sub>LED</sub>=1,75V => R<sub>LED</sub>=1,75/0,0058=300 Ohm
Thus R<sub>new</sub>=862-300=462 Ohm


**References**  
https://makeabilitylab.github.io/physcomp/electronics/leds.html#current-limiting-resistors  
https://makeabilitylab.github.io/physcomp/arduino/led-on.html


# ass 1 C:  
## calculation
    1000(1000+4700)=0,175 => 0,88 V  
    4700(1000+4700)=0,825 => 4,12 V  
## measurement
    850 => 850/1023 = 0.53 => 4,15  

# ass 1 D:
Imax = 75mA  
Rt =  5/0.075 = 66,6 Ohm  
Rmin = 67 Ohm

Rdaylight ~ .5K, Rdark ~ 20K => Rs = root(.5*20) =  3,3k

https://markusthill.github.io/electronics/choosing-a-voltage-divider-resistor-for-a-ldr/









# Key Bindings¶
ctrl+alt+b / cmd-shift-b / ctrl-shift-b Build Project

cmd-shift-d / ctrl-shift-d Debug project

ctrl+alt+u Upload Firmware

ctrl+alt+s Open Serial Port Monitor