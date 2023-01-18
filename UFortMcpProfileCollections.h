// Class /Script/FortniteGame.FortMcpProfileCollections
// Size: 0x230
class UFortMcpProfileCollections : public UFortMcpProfile
{
	unsigned char unreflected_180[0x40]; // 0x180 (0x40) 
	struct TMap<struct FString, class UFortCollectionData*> DataTables; // 0x1c0 (0x50)
	class UFortCollectionsTaskManager* TaskManager; // 0x210 (0x8)
	unsigned char padding_218[0x18]; // 0x218 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortMcpProfileCollections.MarkCollectedItemsSeen (Has no native function)
	void MarkCollectedItemsSeen(struct TArray<struct FFortMcpCollectionsVariant>& Variants, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCollections.BulkUpdateCollections (Has no native function)
	void BulkUpdateCollections(struct TArray<struct FFortMcpCollectionsBulkUpdateEntry>& Items, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCollections.AddToCollection (Has no native function)
	void AddToCollection(struct FString& category, struct FString& Variant, struct TArray<struct FString>& ContextTags, struct FJsonObjectWrapper& Properties, enum EFortCollectedState& SeenState, struct FDedicatedServerUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)
};

