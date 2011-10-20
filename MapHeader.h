#pragma once

//MapHeader.h

struct MapDataBlock
{
	unsigned int Offset;
	unsigned int Length;
};

struct MapHeader
{
	unsigned int Magic;
	MapDataBlock VertexInfo;
	MapDataBlock IndexInfo;
	MapDataBlock TagsInfo;
	MapDataBlock StringsInfo;
};