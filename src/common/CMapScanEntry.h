#ifndef COMMON_CMAP_SCAN_ENTRY_H_
#define COMMON_CMAP_SCAN_ENTRY_H_

#include "utility.h"

#include MSC_PUSH_PACKED
struct CMapScanEntry
{
	u16 Code;
	u16 Index;
} GNUC_PACKED;
#include MSC_POP_PACKED

#endif	// COMMON_CMAP_SCAN_ENTRY_H_
