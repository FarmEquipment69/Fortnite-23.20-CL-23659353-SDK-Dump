// Class /Script/Engine.DataTable
// Size: 0xb0
class UDataTable : public UObject
{
	class UScriptStruct* RowStruct; // 0x28 (0x8)
	unsigned char unreflected_30[0x50]; // 0x30 (0x50) 
	unsigned char bStripFromClientBuilds; // 0x80 (0x1)
	unsigned char bIgnoreExtraFields; // 0x80 (0x1)
	unsigned char bIgnoreMissingFields; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct FString ImportKeyField; // 0x88 (0x10)
	unsigned char padding_98[0x18]; // 0x98 (0x18)
};

