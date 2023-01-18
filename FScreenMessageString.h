// ScriptStruct /Script/Engine.ScreenMessageString
// Size: 0x38
struct FScreenMessageString
{
	uint64_t Key; // 0x0 (0x8)
	struct FString ScreenMessage; // 0x8 (0x10)
	struct FColor DisplayColor; // 0x18 (0x4)
	float TimeToDisplay; // 0x1c (0x4)
	float CurrentTimeDisplayed; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FVector2D TextScale; // 0x28 (0x10)
};

