// Class /Script/Engine.RuntimeSpatialHashExternalStreamingObject
// Size: 0xe0
class URuntimeSpatialHashExternalStreamingObject : public URuntimeHashExternalStreamingObjectBase
{
	struct TArray<struct FSpatialHashStreamingGrid> StreamingGrids; // 0x80 (0x10)
	struct TMap<struct FName, struct FName> CellToLevelStreamingPackage; // 0x90 (0x50)
};

