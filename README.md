jsPlumb_Liviz.js
================

A combination of the [jsPlumb](https://github.com/sporritt/jsplumb) library that connects elements with the [Liviz.js](https://github.com/gyuque/livizjs) for the positioning of these elements.

In other words: using jsPlumb for the UI (connecting divs), and Liviz.js for the positioning of these elements (divs).

All changes were done to the Liviz.js code, and are:
- Removal of code that writes to the canvas (since I'm using jsPlumb's UI/connectors).
- After getting the new positions of the elements, updating the elements with these positions, and redrawing the connectors (since the connectors are not updated after the divs are computationally moved).
- The "em-dotgen.js" is pretty big, so it was minified.

This combination was worked on for the [LNDB.info](http://lndb.info/) site as a character relation diagram feature.

## jsPlumb
jsPlumb provides a means for a developer to visually connect elements on their web pages. It uses SVG or 
Canvas in modern browsers, and VML on IE 8 and below.

## Liviz.js
An interactive Graphviz in javascript.

## jsPlumb & Liviz.js demo
- [Akikan! character relation diagram](http://lndb.info/light_novel/diagram/Akikan!)
- [Strawberry_Panic! character relation diagram](http://lndb.info/light_novel/diagram/Strawberry_Panic!)

## jsPlumb's License
All 1.x.x versions of jsPlumb are dual-licensed under both MIT and GPL version 2.
