// ScriptStruct /Script/FortniteGame.AlterationSlot
// Size: 0x1c
struct FAlterationSlot
{
	int UnlockLevel; // 0x0 (0x4)
	enum EFortRarity UnlockRarity; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FName SlotDefinitionRow; // 0x8 (0x4)
	bool bRespeccable; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FName SlotRarityInitRow; // 0x10 (0x4)
	enum EFortRarity SlotInitMin; // 0x14 (0x1)
	enum EFortRarity SlotInitMax; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	int SlotInitIndex; // 0x18 (0x4)
};

