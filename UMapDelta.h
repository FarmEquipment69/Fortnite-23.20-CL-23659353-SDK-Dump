// Class /Script/DeltaFileSystem.MapDelta
// Size: 0xf0
class UMapDelta : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FString PackageToApplyTo; // 0x30 (0x10)
	struct TMap<struct FGuid, struct FAddAction> AddActions; // 0x40 (0x50)
	struct TArray<struct FUpdateAction> UpdateActions; // 0x90 (0x10)
	struct TMap<struct FGuid, struct FDeleteAction> DeleteActions; // 0xa0 (0x50)
};

