// ScriptStruct /Script/FortniteGame.CombinedFeatureProgressSummary
// Size: 0x50
struct FCombinedFeatureProgressSummary
{
	enum EFortGameFeature GameFeature; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString PrimaryTextKey; // 0x8 (0x10)
	struct FString LocalizedPrimaryText; // 0x18 (0x10)
	struct FString SecondaryTextKey; // 0x28 (0x10)
	struct FString LocalizedSecondaryText; // 0x38 (0x10)
	float CombinedProgress; // 0x48 (0x4)
	bool bIsPaused; // 0x4c (0x1)
	bool bCanBePaused; // 0x4d (0x1)
	bool bIsFinished; // 0x4e (0x1)
	unsigned char padding_4f[0x1]; // 0x4f (0x1)
};

