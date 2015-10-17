# arduino-template

A template for creating Arduino projects, sans IDE.

# Usage

Put your code in the ```/src``` directory. Include at least one file with the standard ```void setup()``` and ``` void loop()``` functions.

To build, run ```make``` from the src directory. Additional make targets: ```make clean```, ```make upload```, ```make monitor```, ```make upload_monitor```

See the ```Makefile.master``` for details.
