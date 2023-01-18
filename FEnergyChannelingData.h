// ScriptStruct /Script/EnergyRuntime.EnergyChannelingData
// Size: 0x18
struct FEnergyChannelingData
{
	float EnergyPerSecond; // 0x0 (0x4)
	struct FGameplayTag EnergyChannelingPurposeIdentifier; // 0x4 (0x4)
	class UObject* OptionalEnergyChannelingSource; // 0x8 (0x8)
	bool bShouldStopApplyingNextTick; // 0x10 (0x1)
	unsigned char padding_11[0x7]; // 0x11 (0x7)
};

