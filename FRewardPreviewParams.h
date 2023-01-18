// ScriptStruct /Script/FortniteGame.RewardPreviewParams
// Size: 0x58
struct FRewardPreviewParams
{
	bool bHide3DPreview; // 0x20 (0x1)
	unsigned char unreflected_21[0xf]; // 0x21 (0xf) 
	class UFortItemDefinition* ItemDefWeWishToView; // 0x30 (0x8)
	class UFortItemDefinition* OriginalItemDef; // 0x38 (0x8)
	enum EAthenaRewardVisualImportanceType RewardImportanceType; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	int Quantity; // 0x44 (0x4)
	struct TArray<struct FMcpVariantChannelInfo> VariantsToApply; // 0x48 (0x10)
};

