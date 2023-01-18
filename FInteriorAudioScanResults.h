// ScriptStruct /Script/FortniteGame.InteriorAudioScanResults
// Size: 0x38
struct FInteriorAudioScanResults
{
	int Size; // 0x0 (0x4)
	int SolidBuildingCount; // 0x4 (0x4)
	int DistantPartialBuildingCount; // 0x8 (0x4)
	int PartialBuildingCount; // 0xc (0x4)
	int PlayerBuiltCount; // 0x10 (0x4)
	int TotalBuildingCount; // 0x14 (0x4)
	int LineTraceCount; // 0x18 (0x4)
	int CeilingCheckCount; // 0x1c (0x4)
	bool bHasRoof; // 0x20 (0x1)
	struct TEnumAsByte<EFortResourceType> DominantResourceType; // 0x21 (0x1)
	unsigned char unreflected_22[0x6]; // 0x22 (0x6) 
	struct TArray<class ABuildingSMActor*> BuildingActors; // 0x28 (0x10)
};

