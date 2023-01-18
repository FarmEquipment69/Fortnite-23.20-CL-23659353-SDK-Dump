// ScriptStruct /Script/FortniteGame.QueuedItemsToDropViaPickup
// Size: 0x20
struct FQueuedItemsToDropViaPickup
{
	class AFortPawn* DestructionPawn; // 0x0 (0x8)
	int TotalNumItemsToDrop; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<class UFortWorldItem*> ItemsToDrop; // 0x10 (0x10)
};

