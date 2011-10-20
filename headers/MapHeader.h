#pragma once

//MapHeader.h

struct MapDataBlock
{
	unsigned int Offset;
	unsigned int Length;
};

struct FileMagic
{
	unsigned short ConstMagic;//This value must ALWAYS be 0x0f64 in order for it to be usable with the engine.
	unsigned short IdentMagic;//This value can be anything, will tell the engine what kind of data it is.
};

struct MapHeader
{
	FileMagic 		Magic;
	MapDataBlock 	VertexInfo;
	MapDataBlock 	IndexInfo;
	MapDataBlock 	TagsInfo;
	MapDataBlock 	StringsInfo;
};