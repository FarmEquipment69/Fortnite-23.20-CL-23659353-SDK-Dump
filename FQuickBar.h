// ScriptStruct /Script/FortniteGame.QuickBar
// Size: 0x90
struct FQuickBar
{
	int CurrentFocusedSlot; // 0x0 (0x4)
	int PreviousFocusedSlot; // 0x4 (0x4)
	int SecondaryFocusedSlot; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FQuickBarSlot> Slots; // 0x10 (0x10)
	struct FQuickBarData DataDefinition; // 0x20 (0x10)
	struct TSet<class UFortItemDefinition*> EquippedItemDefinitions; // 0x30 (0x50)
	struct TArray<int> SharedVisibleSlotIndicesWhenUsingGamepad; // 0x80 (0x10)
};

