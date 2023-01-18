// ScriptStruct /Script/FortniteGame.InfiltrationPOIInfo
// Size: 0x40
struct FInfiltrationPOIInfo
{
	struct FGameplayTag POITag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<class AInfiltrationCarryObjectSpawnPoint*> IntelSpawnPoints; // 0x8 (0x10)
	struct TArray<class AInfiltrationCarryObjectCapturePoint*> IntelCapturePoints; // 0x18 (0x10)
	struct FText POIOverrideName; // 0x28 (0x18)
};

