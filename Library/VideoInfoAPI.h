#pragma once

#include <string>

#pragma pack(push, 1)

typedef struct _VIDEO_STREAM_INFO
{
	uint8_t 			_zero;
	uint16_t			hRes;		//!< Horizontal resolution in Px
	uint16_t			vRes;		//!< Vertical resolution in Px
	uint8_t				fRate;		//!< Refresh rate in Hz
} 
VIDEO_STREAM_INFO;

#pragma pack(pop)
