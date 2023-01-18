// ScriptStruct /Script/FortniteGame.UserOptionDefinitionTextMetaData
// Size: 0x28
struct FUserOptionDefinitionTextMetaData : FUserOptionDefinitionMetaData
{
	struct FText DefaultValue; // 0x8 (0x18)
	int ValueLengthLimit; // 0x20 (0x4)
	bool bSanitizeValue; // 0x24 (0x1)
	bool bValidatePersistentID; // 0x25 (0x1)
	unsigned char padding_26[0x2]; // 0x26 (0x2)
};

