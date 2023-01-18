// ScriptStruct /Script/FortniteGame.FortContentEncryptionCollection
// Size: 0x14
struct FFortContentEncryptionCollection
{
	bool bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FCollectionReference Collection; // 0x4 (0x4)
	enum EFortContentEncryptionCollectionGrouping Grouping; // 0x8 (0x4)
	enum EFortContentEncryptionAllowedReferences AllowedReferences; // 0xc (0x4)
	enum EFortContentEncryptionGroupType GroupType; // 0x10 (0x4)
};

