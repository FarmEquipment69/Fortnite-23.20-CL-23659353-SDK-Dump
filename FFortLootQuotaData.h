// ScriptStruct /Script/FortniteGame.FortLootQuotaData
// Size: 0x28
struct FFortLootQuotaData : FTableRowBase
{
	struct FName QuotaCategory; // 0x8 (0x4)
	struct TEnumAsByte<ELootQuotaLevel> QuotaLevel; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	int min; // 0x10 (0x4)
	int max; // 0x14 (0x4)
	float Quota; // 0x18 (0x4)
	int MinWorldLevel; // 0x1c (0x4)
	int MaxWorldLevel; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

