// Class /Script/FortniteUI.AthenaVariantPickerConfig
// Size: 0xd0
class UAthenaVariantPickerConfig : public UDataAsset
{
	struct TMap<struct FGameplayTag, struct FAthenaVariantFilterSet> FilterSets; // 0x30 (0x50)
	struct TMap<struct FName, struct TWeakObjectPtr<class UTexture2D>> NamedSpecialIcons; // 0x80 (0x50)
};

