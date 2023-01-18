// ScriptStruct /Script/Engine.PrimaryAssetRulesCustomOverride
// Size: 0x38
struct FPrimaryAssetRulesCustomOverride
{
	struct FPrimaryAssetType PrimaryAssetType; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FDirectoryPath FilterDirectory; // 0x8 (0x10)
	struct FString FilterString; // 0x18 (0x10)
	struct FPrimaryAssetRules Rules; // 0x28 (0xc)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

