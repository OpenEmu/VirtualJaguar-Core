//
// DAC.H: Header file
//

#ifndef __DAC_H__
#define __DAC_H__

#include "memory.h"

void DACInit(void);
void DACReset(void);
void DACPauseAudioThread(bool state = true);
void DACDone(void);
//int GetCalculatedFrequency(void);

// DAC memory access

void DACWriteByte(uint32 offset, uint8 data, uint32 who = UNKNOWN);
void DACWriteWord(uint32 offset, uint16 data, uint32 who = UNKNOWN);
uint8 DACReadByte(uint32 offset, uint32 who = UNKNOWN);
uint16 DACReadWord(uint32 offset, uint32 who = UNKNOWN);

void SDLSoundCallback(uint16_t * buffer, int length);

#define BUFFER_SIZE			0x800				// Make the DAC buffers 64K x 16 bits
#define DAC_AUDIO_RATE		48000				// Set the audio rate to 48 KHz

extern uint16_t *sampleBuffer;

#endif	// __DAC_H__
