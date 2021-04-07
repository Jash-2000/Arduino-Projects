![](https://github.com/Jash-2000/Arduino-Projects/blob/master/download1.png)
## What is an embedded device

So part of the idea is that you want to be able to give enhanced functionality to a regular device but not add complexity to the device. So for instance, take the example of 
a camera. This camera, you could've gotten a camera 40 years ago that you can use to take a picture with, snap a button, take a picture. A new camera, an Internet of Things camera,
is network, it's got computers inside, computational technology. The same interface, you snap the button and it takes the picture, but it does a lot more. It has a lot more 
enhanced features. Maybe it does jitters control or something like that, so it's embedded within the device, but it's well hidden. It's embedded behind a nice, what we'll call 
natural interface. So that the user shouldn't have to bend to conform to the device, right? Instead, the device should conform to what the user wants, and it's to have an 
interface that makes it easy for the user to deal with. So, in order to do that, the assistance, they have to be embedded within regular devices, and they have to interact with 
the physical world through the use of sensors that read information about the physical world, maybe somebody pressed a button, a light turned on, something like that. Also, a set 
of actuators that cause something to happen in the physical world that basically change the state of the physical world, so maybe motors or lights or something. 

So what are embedded systems? Embedded systems are computer based systems that don't look like computers. That's my simple definition. The complexity of a computer is hidden from 
the user. So if you have a computer, desktop laptop something like that. If you've ever used it, which I know you have, there are complexities to using a computer. So say you want 
to install some new software. Right? You install software. Sometimes it's easy. But sometimes there's a conflict, like for instance video games. I used to play video games on 
computers, now I use only game machines, but say I play a video game on a computer. I put the video game in there and install it, and it has some conflict with the video card. I 
need a new video card, right, to play this new video game. So, then I need to get new drivers for my video card, so there's this whole interaction. The functions are not 
separated. This is different than an IOT device. An IOT device basically has one function. We talked about this last module, right. It has one function it's trying to do, like the
car. It does the car things, right. A camera does camera things, but a general purpose computer It can do a lot of things, and so there can be conflicts. If I install software to 
play a video game, that might interfere with the software to do something else. So these relationships add to complexity.

They're basically everything that interacts, all the internet of things devices that we've talked about. But plus or minus the internet part. So take a digital camera, that's what
we have here. Digital camera, a basic digital camera might not be networked, right? It might just be an embedded system where you click, press a button, you take a picture. And 
the picture is stored locally, but it might not be immediately networked, right? So that would, you would call that type of thing an embedded system. Because the complexity is 
embedded within the device. So, a camera, an old camera, you know? A mechanical camera, has the same interface. You press a button, it takes a picture, right? New digital camera,
same interface, press a button, takes a picture, but there's a lot more complexity to what's going on inside. So, that's the term embedded, right? The complexity is embedded 
inside the device, and the user doesn't have to see it. The user can benefit from the complexity, but using a very simple interface.

Now sometimes embedded systems don't interact directly with the user, but they interact with the user through another device. So what do I mean by this? Let's take this, take this memory, this thumb drive right. Now a thumb drive, you've seen this type of thumb drive, it stores data. This type of thing does not interact directly with the user, right. A human doesn't have, doesn't connect this up to their body or something, right, yet. Right now they connect it to their computer or something like that or their phone or whatever it is. And then they interact with it, they can access the files on it through another device. So you would also call this an embedded system, even though it's not directly interacting with the human.

So this is very different than traditional software engineering, where you just wanna get it to work and get it to work some how. And the assumption there is that Moore's Law 
will save you eventually so by Moore's Law, you may have heard of this before but Moore's law just says let's say that approximately says that machines get faster and more 
computationally efficient every year, right? They get more dense and faster. Which by the way, Moore's law is slowing down but still, this happens. Machines improve. So, 
software engineering often you'll just either say, look, just get it to work and if it's slow it's okay, because process or performance is improving every year. And so in the 
future it won't matter. Right. So that was the background assumption to a lot of software engineering. But a better systems, you can't think like that. You have to think 
look not only does it work. It's gotta be working fast. It's gotta be working low power and all this.

---

# Arduino Environment

In this section, I will be introducing the Arduino IDE, actually the entire Arduino environment which involves the IDE, which is a software interface where you write the code and you compile it and upload it. The Arduino board is another element of the Arduino environment, and that actually involves a chip and the program that executes the code, but also the Arduino shields. The Arduino compatible shield, so a shield is basically add-on hardware. It comes, then you stack on top of the board, and you use that with, via library so you get a set of Arduino libraries, associated with each shield. So really the Arduino environment has three components, the IDE for programming, the board itself, and the shields. Additional Sensors and acuators add to the functionality.

**Arduino board with Atmega328**
![Arduino](https://github.com/Jash-2000/Arduino-Projects/blob/master/Images/download.png)

Now, the ATmega328 that you're gonna be working with, and any microcontroller really, has let's say, broadly defined, two types of code running on the microcontroller. Okay. One type of code, we'll call application code. That is a code that you as a programmer are generally going to write. Okay. That is a program that doesn't come with the microcontroller, you write that for your particular application. So if you want to make an Arduino, you wanna build a system with an Arduino I don't know, something to sense if plants need to get watered. So it senses the humidity, it senses how wet it is, it waters the plants, something like that. You're gonna write code to do that and you would call that application code. So we write the code, or you, the programmer, write the code, and it executes the main functionality of the system, directly.

Now, besides this application code, systems typically have firmware. Now, firmware Is low level code that supports the main function, but doesn't directly perform the main function. So it does all the background stuff, like the USB interface, right. The Arduino has to talk to the USB interface. And you, as a programmer, you don't have to directly figure out how to talk on the USB interface, but the Arduino has to know how. So it has code in there dedicated to talking on the USB interface. Boot loader code does some of that, and we'll talk about that later. Power modes, right. Changing the power modes from low power to high power mode, that happens in the background. You as a programmer don't have to see that. Reset, when the reset button is pressed, what happens to the device, that's all code that you as a programmer don't have to write. That stuff is already programmed in there. Generally, you call that firmware.

So the programmer doesn’t write it, but it’s code that’s sitting on the Arduino anyway, and comes with the Arduino. So when you buy the Arduino on that microcontroller, it already has firmware built in to it. Now the distinction between firmware and application code is somewhat a matter of perspective. So in the sense that, so definitely it's clear the application code is something that the programmer writes. But all the code, so say you take an Arduino, and you use your Arduino to make a camera, like the one pointing at me right now, okay, you use it to drive the motors and pull the lens in and out and all that, right? So you write some code, and you wrote it so you would think of it as application code. But once you sell that product to somebody, sell the camera to somebody, they will never touch that code, right? They don't access that code. So they think of that code as firmware. That code to them is firmware because they're never gonna modify it, right? So somehow this definition of firmware depends on your perspective. What part of the chain you're in, right. If you buy something, and it has code already in it that you did not modify you call that firmware often, and it accesses a low level hardware, you call that firmware. But in general with us, we're gonna be writing code on this Arduino, but we will not be writing this firmware code. But it exists on there, so you should be aware of that
