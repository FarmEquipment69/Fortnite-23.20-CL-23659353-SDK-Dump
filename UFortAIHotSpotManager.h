// Class /Script/FortniteAI.FortAIHotSpotManager
// Size: 0x1c8
class UFortAIHotSpotManager : public UAIHotSpotManagerProxy
{
	struct TWeakObjectPtr<class UBuildingActorHotSpotConfig> FallbackHotspotConfig; // 0x80 (0x28)
	unsigned char unreflected_a8[0xf0]; // 0xa8 (0xf0) 
	struct TArray<struct FAutoAcquireSlot> AutoAcquireSlots; // 0x198 (0x10)
	unsigned char padding_1a8[0x20]; // 0x1a8 (0x20)
};

