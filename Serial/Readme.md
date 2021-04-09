# Serial Communication Protocol

Sometimes, we need some way to transfer information from the Arduino, or some microcontroller, to the host that we're debugging from. And serial interface is how we're gonna do 
that. So, serial interface basically, we're talking about a protocol, a set of protocols really, that speak between the host and the microcontroller. Serial protocol in general is 
where you transmit data serially. So you transmit data one bit at a time, or one chunk at a time. In our case, one bit at a time. Instead of, say, eight bits at a time. 
The Arduino, the microprocessor in there, the Mega 328, it's a eight bit processor, so each chunk of data is eight bit. But we're gonna be transmitting one bit at a time. 
So why would we do that?

So the parallel data, eight bits parallel, are gonna be transmitted one bit at a time. The reason why we do this, is because it saves us pins. So what has to happen is these 
parallel bits, these eight bits, they're sent one at a time. And at the receiving end they have to be received one at a time but grouped back into eight bits, right? We need the 
original eight bits back. So they receive one at a time, and once you get to eight, it says, okay this is a group of eight, that's a byte, and it sends it off and processes it.
So we do this to save pins.

Now there are many different, or rather, several different serial protocols. We are gonna focus on UART. UART stands for **Universal Asynchronous Receiver/Transmitter**. It is an 
old, old protocol. It's used for serial communication between devices. It gives you long distance communication. Also, it's asynchronous, meaning no shared clock. 
A clock is basically a square wave having rising edges and falling edges. And all the devices in the system time themselves off of the rising edge. So, one goal when you're using 
a clock is that every item, every say part, that's receiving the clock, they have to receive the rising edge at the same time.

## Serial Functions on Arduino

The setup function
```C
  Serial.begin(9600);
```
actually defines the speed of serial communication with the laptop you are connected with. It is important to define this so that both the transmitter (Arduino) and the reciever
are in coherence and can communicate properly. 
Each bit you send via the serial protocol is sent one-by-one unitll the last bit, which is a unique identifier. 

For more information, visit [https://www.arduino.cc/en/Reference/Serial](https://www.arduino.cc/en/Reference/Serial) to watch the functions and examples.

---

## Description of tutorial code present in this folder
