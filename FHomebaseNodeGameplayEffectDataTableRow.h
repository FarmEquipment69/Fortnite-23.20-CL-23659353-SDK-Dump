// ScriptStruct /Script/FortniteGame.HomebaseNodeGameplayEffectDataTableRow
// Size: 0x110
struct FHomebaseNodeGameplayEffectDataTableRow : FTableRowBase
{
	struct FGameplayAttribute Attribute; // 0x8 (0x38)
	struct TEnumAsByte<EGameplayModOp> Operation; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float Magnitude; // 0x44 (0x4)
	struct FGameplayTagContainer ApplicationRequiredTagsContainer; // 0x48 (0x20)
	struct FGameplayTagContainer RequiredSourceTagsContainer; // 0x68 (0x20)
	struct FGameplayTagContainer RequiredTargetTagsContainer; // 0x88 (0x20)
	struct FGameplayTagContainer GrantedTagsContainer; // 0xa8 (0x20)
	struct FGameplayTagContainer IgnoreSourceTagsContainer; // 0xc8 (0x20)
	struct FGameplayTagContainer AssetTagsContainer; // 0xe8 (0x20)
	int AssociatedGEIdx; // 0x108 (0x4)
	int AssociatedModifierIdx; // 0x10c (0x4)
};

