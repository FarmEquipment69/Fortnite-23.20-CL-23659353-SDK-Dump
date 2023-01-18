// ScriptStruct /Script/FortniteGame.RadiusTrackingInitializer
// Size: 0x58
struct FRadiusTrackingInitializer
{
	float MaxCenterOffset; // 0x0 (0x4)
	float MinimumRadius; // 0x4 (0x4)
	float MaximumRadius; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UMaterialInterface* CircleDrawingMaterial; // 0x10 (0x8)
	float TimeBetweenUpdatesInSeconds; // 0x18 (0x4)
	float RadiusAmountToShrinkEachUpdate; // 0x1c (0x4)
	struct FLinearColor CircleColor; // 0x20 (0x10)
	enum ERadiusTrackingGroupingType GroupingType; // 0x30 (0x1)
	unsigned char padding_31[0x27]; // 0x31 (0x27)
};

