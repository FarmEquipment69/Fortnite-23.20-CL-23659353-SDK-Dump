// ScriptStruct /Script/FortniteGame.UserOptionDefinitionStringMetaData
// Size: 0x40
struct FUserOptionDefinitionStringMetaData : FUserOptionDefinitionMetaData
{
	struct FString DefaultValue; // 0x8 (0x10)
	int ValueLengthLimit; // 0x18 (0x4)
	bool bLocalizeValue; // 0x1c (0x1)
	bool bSanitizeValue; // 0x1d (0x1)
	bool bValidatePersistentID; // 0x1e (0x1)
	unsigned char unreflected_1f[0x1]; // 0x1f (0x1) 
	struct FGameplayTagContainer GrantedContextTagsIfNotEmpty; // 0x20 (0x20)
};

