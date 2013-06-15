/*
 *  This file contains the JS that handles the switching between render modes.
 */
jsPlumb.bind("ready", function() {

	jsPlumb.List.init();

	// chrome fix.
	document.onselectstart = function () { return false; };				

	// explanation div is draggable
	$("#explanation").draggable();

    jsPlumbChar.init();
});