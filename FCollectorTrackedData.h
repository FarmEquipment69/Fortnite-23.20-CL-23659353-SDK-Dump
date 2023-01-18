// ScriptStruct /Script/FortniteGame.CollectorTrackedData
// Size: 0x20
struct FCollectorTrackedData
{
	unsigned char Team; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class AFortPlayerState* Player; // 0x8 (0x8)
	struct TArray<struct FCollectedItemValue> TrackedItemValues; // 0x10 (0x10)
};

