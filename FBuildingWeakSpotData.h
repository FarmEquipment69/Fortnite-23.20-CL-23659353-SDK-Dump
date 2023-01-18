// ScriptStruct /Script/FortniteGame.BuildingWeakSpotData
// Size: 0x50
struct FBuildingWeakSpotData
{
	struct TWeakObjectPtr<class UObject> ParentObject; // 0x0 (0x8)
	struct FVector_NetQuantizeNormal Normal; // 0x8 (0x18)
	struct FVector_NetQuantize10 Position; // 0x20 (0x18)
	int HitCount; // 0x38 (0x4)
	unsigned char padding_3c[0x14]; // 0x3c (0x14)
};

