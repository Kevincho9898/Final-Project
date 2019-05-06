**Photoresistor Instrument**

Using Photoresistors, I tried to create an instrument that plays different tones depending on how much light the photoresistor senses. 

**Summary**

I was first thinking of making an instrument of some sort using buttons to make a keyboard. But that seemed a bit boring so I tried to find a cooler way of playing with sounds. Photoresistors are sensors that can detect how much light there are, so by covering them up or exposing it to more light it can change the tone of the sound. I connected total of 5 sensors producing different frequencies. 

**Component Parts**

Arduino Uno
Photoresistor/LDR:  detects how much light there are
Piezo Buzzer: outputs sound

**Timeline

Week 0: Write Proposal
Week 1: First thought of making a keyboard out of push buttons
Week 2: Simply pressing buttons to play music was was boring, so I tried to think of other ways to play sound. I got the first photoresistor working and measuring light. 
Week 3: Hooked up rest of the photoresistor and piezo buzzers so they churn out sound
Week 4: Present!

**Challenges

There were tutorials on how to make theremin, but all of them were using just one photoresistor and piezo buzzer. I wanted to have multiple sensors all playing at once so figuring out code for that was difficult for me. At first, I could only play one sensor at a time but using array I was able to control them all. Later I tried to give it different frequencies, but if I lower the frequencies to give it lower tone the volume went down as well. I couldn’t figure out how to adjust the volume while maintaining the frequency so higher pitch tones are much more vivid than lower ones.




