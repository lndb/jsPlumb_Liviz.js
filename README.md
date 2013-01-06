jsPlumb_Liviz.js
================

A combination of the [jsPlumb](https://github.com/sporritt/jsplumb) library that connects elements with the [Liviz.js](https://github.com/gyuque/livizjs) for the positioning of these elements.

In other words: using jsPlumb for the UI (connecting divs), and Liviz.js for the positioning of these elements (divs).

All changes were done to the Liviz.js code, and are:
- Removal of code that writes to the canvas (since I'm using jsPlumb's UI/connectors).
- After getting the new positions of the elements, updating the elements with these positions, and redrawing the connectors (since the connectors are not updated after the divs are computationally moved).
- The "em-dotgen.js" is pretty big, so it was minified.

This combination was worked on for the [LNDB.info](http://lndb.info/) site as a "character relation diagram" feature.

## jsPlumb
jsPlumb provides a means for a developer to visually connect elements on their web pages. It uses SVG or 
Canvas in modern browsers, and VML on IE 8 and below.

## Liviz.js
An interactive Graphviz in javascript.

## jsPlumb & Liviz.js demo
- [Akikan! character relation diagram](http://lndb.info/light_novel/diagram/Akikan!)
- [Strawberry Panic! character relation diagram](http://lndb.info/light_novel/diagram/Strawberry_Panic!)

## jsPlumb's License
All 1.x.x versions of jsPlumb are dual-licensed under both MIT and GPL version 2.

## Liviz.js (JSViz) License
Copyright (c) 2011-2012 Satoshi Ueyama

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
