// ScriptStruct /Script/FortniteGame.UserOptionDefinitionBoolMetaData
// Size: 0x80
struct FUserOptionDefinitionBoolMetaData : FUserOptionDefinitionMetaData
{
	bool bDefaultValue; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FText TrueDisplayName; // 0x10 (0x18)
	struct FGameplayTagContainer GrantedContextTagsWhenTrue; // 0x28 (0x20)
	struct FText FalseDisplayName; // 0x48 (0x18)
	struct FGameplayTagContainer GrantedContextTagsWhenFalse; // 0x60 (0x20)
};

