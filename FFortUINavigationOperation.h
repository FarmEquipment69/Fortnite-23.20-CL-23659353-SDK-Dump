// ScriptStruct /Script/FortniteUI.FortUINavigationOperation
// Size: 0x28
struct FFortUINavigationOperation
{
	enum EFortUINavigationOp Operation; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName SquadId; // 0x4 (0x4)
	int SquadSlotIndex; // 0x8 (0x4)
	struct FName PageId; // 0xc (0x4)
	struct FName NodeId; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	class UFortItem* Item; // 0x18 (0x8)
	enum EFortUIFeature Feature; // 0x20 (0x1)
	enum EFortFrontendInventoryFilter ItemManagementFilter; // 0x21 (0x1)
	unsigned char padding_22[0x6]; // 0x22 (0x6)
};

