// ScriptStruct /Script/FortniteGame.ProfileGoScenario
// Size: 0x78
struct FProfileGoScenario
{
	struct FString Name; // 0x0 (0x10)
	struct FVector Position; // 0x10 (0x18)
	struct FRotator Orientation; // 0x28 (0x18)
	struct FString OnBegin; // 0x40 (0x10)
	struct FString OverrideCommands; // 0x50 (0x10)
	struct FString OnEnd; // 0x60 (0x10)
	bool AutoGenerated; // 0x70 (0x1)
	bool UseSetupCheats; // 0x71 (0x1)
	bool SkipRunCommands; // 0x72 (0x1)
	unsigned char padding_73[0x5]; // 0x73 (0x5)
};

