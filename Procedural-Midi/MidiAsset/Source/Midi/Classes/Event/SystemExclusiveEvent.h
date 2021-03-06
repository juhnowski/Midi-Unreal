// Copyright 2011 Alex Leffelman
// Updated 2016 Scott Bishel

#pragma once

#include "ChannelEvent.h"

/**
 * SysEx events may not be properly handled by this library.
 */
class MIDI_API SystemExclusiveEvent : public MidiEvent
{
	VariableLengthInt * mLength;
	char * mData;

public:
	SystemExclusiveEvent(int type, long tick, char data[]);
	SystemExclusiveEvent(int type, long tick, long delta, char data[]);
	~SystemExclusiveEvent();

	char* getData();
	void setData(char data[]);

	bool requiresStatusByte(MidiEvent* prevEvent);

	void writeToFile(FMemoryWriter & output, bool writeType);
	int CompareTo(MidiEvent *other);
protected:
	int getEventSize();
};
