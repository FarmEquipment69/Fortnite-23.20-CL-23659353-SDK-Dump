// ScriptStruct /Script/FortniteGame.FortVerbMessage_AddToInventory
// Size: 0xa8
struct FFortVerbMessage_AddToInventory : FVerbMessage
{
	int Amount; // 0x68 (0x4)
	bool bIsBrandNewItem; // 0x6c (0x1)
	unsigned char unreflected_6d[0x3]; // 0x6d (0x3) 
	struct FGuid ItemGuid; // 0x70 (0x10)
	struct FSubjectTagsPair Item; // 0x80 (0x28)
};

