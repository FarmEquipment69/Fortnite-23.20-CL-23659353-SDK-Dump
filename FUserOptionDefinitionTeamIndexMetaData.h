// ScriptStruct /Script/FortniteGame.UserOptionDefinitionTeamIndexMetaData
// Size: 0x60
struct FUserOptionDefinitionTeamIndexMetaData : FUserOptionDefinitionMetaData
{
	struct FCreativeTeamOption* DefaultValue; // 0x8 (0x8)
	int MinTeamIndex; // 0x10 (0x4)
	int MaxTeamIndex; // 0x14 (0x4)
	struct FText TeamIndexDisplayPattern; // 0x18 (0x18)
	struct TArray<enum ECreativeTeamType> TeamTypesToShow; // 0x30 (0x10)
	struct TArray<enum ECreativeTeamType> TeamTypesToHide; // 0x40 (0x10)
	struct TArray<struct FUserOptionDefinitionTeamTypeEntry> TeamTypeEntries; // 0x50 (0x10)
};

