// ScriptStruct /Script/VariantManagerContent.VariantDependency
// Size: 0x58
struct FVariantDependency
{
	struct TWeakObjectPtr<class UVariantSet> VariantSet; // 0x0 (0x28)
	struct TWeakObjectPtr<class UVariant> Variant; // 0x28 (0x28)
	bool bEnabled; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)
};

