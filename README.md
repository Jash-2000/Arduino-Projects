# Arduino-Projects

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

In this section, I will be introducing the Arduino IDE, actually the entire Arduino environment which involves the IDE, which is a software interface where you write the code and you compile it and upload it. The Arduino board is another element of the Arduino environment, and that actually involves a chip and the program that executes the code, but also the Arduino shields. The Arduino compatible shield, so a shield is basically add-on hardware. It comes, then you stack on top of the board, and you use that with, via library so you get a set of Arduino libraries, associated with each shield. So really the Arduino environment has three components, the IDE for programming, the board itself, and the shields.
