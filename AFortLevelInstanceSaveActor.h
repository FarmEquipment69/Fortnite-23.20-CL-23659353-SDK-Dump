// Class /Script/FortniteGame.FortLevelInstanceSaveActor
// Size: 0x368
class AFortLevelInstanceSaveActor : public AInfo
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class ULevelSaveRecord* LevelSaveRecord; // 0x290 (0x8)
	int SizeX; // 0x298 (0x4)
	int SizeY; // 0x29c (0x4)
	int Height; // 0x2a0 (0x4)
	int CachedActorCost; // 0x2a4 (0x4)
	struct TWeakObjectPtr<class UFortCreativeActorCollection> ContentCollection; // 0x2a8 (0x28)
	struct FMulticastInlineDelegate OnLevelInstanceAddedToSave; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate OnLevelInstanceSaveNameChanged; // 0x2e0 (0x10)
	struct FMulticastInlineDelegate OnLevelInstanceSaveContentChanged; // 0x2f0 (0x10)
	struct FMulticastInlineDelegate OnLevelInstanceSizeChanged; // 0x300 (0x10)
	struct FMulticastInlineDelegate OnLevelInstanceContentCollectionChanged; // 0x310 (0x10)
	struct FMulticastInlineDelegate OnLevelInstanceBeingDestroyed; // 0x320 (0x10)
	struct FGuid SavedActorGuid; // 0x330 (0x10)
	unsigned char padding_340[0x28]; // 0x340 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortLevelInstanceSaveActor.Resave (Underlying native function: Resave 0x2971b44)
	void Resave(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLevelInstanceSaveActor.GetSize (Underlying native function: GetSize 0x87d0da0)
	bool GetSize(int& OutSizeX, int& OutSizeY, int& OutHeight); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelInstanceSaveActor.GetLevelInstanceGuid (Underlying native function: GetLevelInstanceGuid 0x87d0838)
	struct FGuid GetLevelInstanceGuid(); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelInstanceSaveActor.GetContentCollection (Underlying native function: GetContentCollection 0x87cff60)
	struct TWeakObjectPtr<class UFortCreativeActorCollection> GetContentCollection(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelInstanceSaveActor.GetCachedActorCost (Underlying native function: GetCachedActorCost 0x2a7ee40)
	int GetCachedActorCost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

