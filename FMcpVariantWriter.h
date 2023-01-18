// ScriptStruct /Script/FortniteGame.McpVariantWriter
// Size: 0x90
struct FMcpVariantWriter
{
	struct FGameplayTag VariantChannel; // 0x0 (0x4)
	struct FGameplayTag ActiveVariant; // 0x4 (0x4)
	struct FString CustomActiveVariant; // 0x8 (0x10)
	struct FGameplayTagContainer UnlockedVariants; // 0x18 (0x20)
	struct FString CustomUnlockedVariants; // 0x38 (0x10)
	struct FString ColorSwatch; // 0x48 (0x10)
	int AntiConflictChannel; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FString AntiConflictRules; // 0x60 (0x10)
	float AntiConflictMinimumDistance; // 0x70 (0x4)
	float AntiConflictMinimumContrast; // 0x74 (0x4)
	float AntiConflictMinimumHueShift; // 0x78 (0x4)
	float AntiConflictMinimumSaturationShift; // 0x7c (0x4)
	struct TArray<struct FString> UnlockRequirements; // 0x80 (0x10)
};

