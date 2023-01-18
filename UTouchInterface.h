// Class /Script/Engine.TouchInterface
// Size: 0x58
class UTouchInterface : public UObject
{
	struct TArray<struct FTouchInputControl> Controls; // 0x28 (0x10)
	float ActiveOpacity; // 0x38 (0x4)
	float InactiveOpacity; // 0x3c (0x4)
	float TimeUntilDeactive; // 0x40 (0x4)
	float TimeUntilReset; // 0x44 (0x4)
	float ActivationDelay; // 0x48 (0x4)
	bool bPreventRecenter; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	float StartupDelay; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

