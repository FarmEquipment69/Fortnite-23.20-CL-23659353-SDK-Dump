// ScriptStruct /Script/FortniteGame.UserOptionDefinition
// Size: 0x1a8
struct FUserOptionDefinition
{
	struct TWeakObjectPtr<class UClass> PropertyScope; // 0x0 (0x28)
	struct FUserOptionPropertyReference PropertyReference; // 0x28 (0x30)
	struct FText DisplayName; // 0x58 (0x18)
	struct FText Description; // 0x70 (0x18)
	struct FGameplayTagContainer ImplicitCategoryTags; // 0x88 (0x20)
	struct FGameplayTagContainer AdditionalCategoryTags; // 0xa8 (0x20)
	struct FGameplayTagQuery RequiredContextTagQuery; // 0xc8 (0x48)
	struct FScalableFloat SharedSettingOverride; // 0x110 (0x28)
	struct FInstancedStruct MetaData; // 0x138 (0x10)
	struct TEnumAsByte<UFortMatchmakingKnobsDataSource> MenuListType; // 0x148 (0x1)
	unsigned char unreflected_149[0x7]; // 0x149 (0x7) 
	class UClass* EditWidget; // 0x150 (0x8)
	bool bRequireExplicitOverride; // 0x158 (0x1)
	bool bDefaultOverrideValue; // 0x159 (0x1)
	unsigned char unreflected_15a[0x6]; // 0x15a (0x6) 
	struct FText ExplicitOverrideDisplayName; // 0x160 (0x18)
	struct FGameplayTagContainer GrantedContextTagsWhenNotOverriden; // 0x178 (0x20)
	struct FDataTableRowHandle DestructiveAction; // 0x198 (0x10)
};

