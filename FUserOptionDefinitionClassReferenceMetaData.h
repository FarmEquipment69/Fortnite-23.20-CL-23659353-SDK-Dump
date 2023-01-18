// ScriptStruct /Script/FortniteGame.UserOptionDefinitionClassReferenceMetaData
// Size: 0x58
struct FUserOptionDefinitionClassReferenceMetaData : FUserOptionDefinitionMetaData
{
	struct FUserOptionClassTypeMetaData ClassType; // 0x8 (0x10)
	struct FUserOptionClassReference DefaultValue; // 0x18 (0x28)
	class UDataTable* ValuesDataTable; // 0x40 (0x8)
	struct TArray<struct FUserOptionDefinitionClassReferenceValueEntry> ValueEntries; // 0x48 (0x10)
};

