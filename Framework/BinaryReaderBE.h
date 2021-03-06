/**
 * x360emu - An emulator for the Xbox 360 gaming system.
 * Copyright (C) 2012 - The x360emu Project
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/.
 */

#pragma once

#include <BinaryReader.h>

#ifdef _FMW_DLL_
#define DLLPREFIX __declspec(dllexport)
#else
#define DLLPREFIX __declspec(dllimport)
#endif

class BinaryReaderBE : public BinaryReader
{
public:
	DLLPREFIX BinaryReaderBE(Stream &stream);

	DLLPREFIX u16 ReadUInt16();
	DLLPREFIX u32 ReadUInt32();
	DLLPREFIX u64 ReadUInt64();

	DLLPREFIX s16 ReadInt16();
	DLLPREFIX s32 ReadInt32();
	DLLPREFIX s64 ReadInt64();

	DLLPREFIX double ReadDouble();
	DLLPREFIX float ReadFloat();

private:
	/* Avoid a warning */
	BinaryReaderBE &operator=(const BinaryReaderBE &copy);
};

#undef DLLPREFIX
