// Copyright 2011 Alex Leffelman
// Updated 2016 Scott Bishel

#pragma once

#include "ChannelEvent.h"

/**
 * 
 */
class MIDI_API NoteAfterTouch : public ChannelEvent
{
public:
	NoteAfterTouch(long tick, int channel, int note, int amount);
	NoteAfterTouch(long tick, long delta, int channel, int note, int amount);

	int getNoteValue();
	int getAmount();

	void setNoteValue(int p);
	void setAmount(int a);
};
