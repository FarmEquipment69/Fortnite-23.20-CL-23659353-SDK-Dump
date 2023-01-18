// ScriptStruct /Script/FortniteGame.CreateBuildingActorData
// Size: 0x50
struct FCreateBuildingActorData
{
	uint32_t BuildingClassHandle; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector_NetQuantize10 BuildLoc; // 0x8 (0x18)
	struct FRotator BuildRot; // 0x20 (0x18)
	bool bMirrored; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	float SyncKey; // 0x3c (0x4)
	struct FBuildingClassData BuildingClassData; // 0x40 (0x10)
};

