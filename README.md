jsPlumb_Liviz.js
================

A combination of the [jsPlumb](https://github.com/sporritt/jsplumb) library that connects elements with the [Liviz.js](https://github.com/gyuque/livizjs) for the positioning of these elements.

In other words: using jsPlumb for the UI (connecting divs), and Liviz.js for the positioning of these elements (divs).

All changes were done to the Liviz.js code, and are:
- Removal of code that writes to the canvas (since I'm using jsPlumb's UI/connectors).
- After getting the new positions of the elements, updating the elements with these positions, and redrawing the connectors (since the connectors are not updated after the divs are computationally moved).
- The "em-dotgen.js" is pretty big, so it was minified.

This combination was worked on for the [LNDB.info](http://lndb.info/) site as a "character relation diagram" feature.

Update:

I have re-compiled GraphViz's code for the sfdp layout engine. The source code has been added under the src folder. Follow the same steps mentioned [here](https://github.com/gyuque/livizjs) to compile the code...

There are currently two available layout engines:
- [dot](http://www.graphviz.org/pdf/dot.1.pdf) (via the em-dotgen.min.js javascript file)
- [sfdp](http://www.graphviz.org/pdf/sfdp.1.pdf) (via the em-sfdpgen.min.js javascript file)

The example here uses the dot layout engine, but to use the sfdp layout engine follow these steps:
- In the jsPlumbChar.htm file, change the content of the div with the id "layout-engine" from dot to sfdp, and then disable the textarea that's right after it, and enable the disabled textarea that follows.
- In the main.js file, change the value of the LAYOUT_ENGINE variable from dot to sfdp.

More info at the [LNDB.info forum](http://forums.lndb.info/showthread.php?tid=43&pid=185#pid185).

## jsPlumb
jsPlumb provides a means for a developer to visually connect elements on their web pages. It uses SVG or 
Canvas in modern browsers, and VML on IE 8 and below.

## Liviz.js
An interactive Graphviz in javascript.

## jsPlumb & Liviz.js demo (currently using the sfdp layout engine)
- [Akikan! character relation diagram](http://lndb.info/light_novel/diagram/Akikan!)
- [Strawberry Panic! character relation diagram](http://lndb.info/light_novel/diagram/Strawberry_Panic!)
- [Hidan no Aria character relation diagram](http://lndb.info/light_novel/diagram/Hidan_no_Aria)
- [Sasami-san@Ganbaranai character relation diagram](http://lndb.info/light_novel/diagram/Sasami-san@Ganbaranai)
- [Haiyore! Nyaruko-san character relation diagram](http://lndb.info/light_novel/diagram/Haiyore!_Nyaruko-san)
- [Mushi to Medama character relation diagram](http://lndb.info/light_novel/diagram/Mushi_to_Medama)

## jsPlumb's License
All 1.x.x versions of jsPlumb are dual-licensed under both MIT and GPL version 2.

## Liviz.js (JSViz) License
Copyright (c) 2011-2012 Satoshi Ueyama

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
