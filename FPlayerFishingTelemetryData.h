// ScriptStruct /Script/FortniteGame.PlayerFishingTelemetryData
// Size: 0x30
struct FPlayerFishingTelemetryData
{
	float TimeFishingSessionBegan; // 0x0 (0x4)
	struct TWeakObjectPtr<class AFortPickup> Item; // 0x4 (0x8)
	struct TWeakObjectPtr<class AActor> ItemUsedToFish; // 0xc (0x8)
	bool bFromFishingPool; // 0x14 (0x1)
	bool bBestCollected; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	struct FString FishVariantTag; // 0x18 (0x10)
	float FishPropertyLength; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

