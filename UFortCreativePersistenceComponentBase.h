// Class /Script/FortniteGame.FortCreativePersistenceComponentBase
// Size: 0x128
class UFortCreativePersistenceComponentBase : public UActorComponent
{
	unsigned char unreflected_a0[0xa]; // 0xa0 (0xa) 
	bool bConnectedToOptionsComponent; // 0xaa (0x1)
	unsigned char unreflected_ab[0xd]; // 0xab (0xd) 
	class AFortMinigame* OwningMinigame; // 0xb8 (0x8)
	class UFortActorOptionsComponent* OptionsComponent; // 0xc0 (0x8)
	class UFortMinigameLogicComponent* LogicComponent; // 0xc8 (0x8)
	struct FString BasePath; // 0xd0 (0x10)
	struct FString NonUniquePath; // 0xe0 (0x10)
	struct FString DevicePath; // 0xf0 (0x10)
	bool bUniqueForOwner; // 0x100 (0x1)
	unsigned char unreflected_101[0x3]; // 0x101 (0x3) 
	struct FGuid PersistenceID; // 0x104 (0x10)
	unsigned char unreflected_114[0x4]; // 0x114 (0x4) 
	struct FString OverridePersistenceID; // 0x118 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.UpdateIsPersistencePosible (Underlying native function: UpdateIsPersistencePosible 0x87863a4)
	void UpdateIsPersistencePosible(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.TryOverridePersistentIDAndResaveActor (Underlying native function: TryOverridePersistentIDAndResaveActor 0x8786148)
	bool TryOverridePersistentIDAndResaveActor(struct FString& NewPersistenceID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.SetUniqueForOwner (Underlying native function: SetUniqueForOwner 0x7544af0)
	void SetUniqueForOwner(bool& bInUniqueForOwner); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.SetAutoSaveEnabled (Underlying native function: SetAutoSaveEnabled 0x8784524)
	void SetAutoSaveEnabled(bool& bAutoSaveEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.SaveData (Underlying native function: SaveData 0x878392c)
	void SaveData(class UObject*& Data, struct FUniqueNetIdRepl& PlayerId, struct FString& SavePath); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.OnRemovedFromMinigame (Underlying native function: OnRemovedFromMinigame 0x8782e54)
	void OnRemovedFromMinigame(class AFortMinigame*& FortMinigame); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.OnAddedToMinigame (Underlying native function: OnAddedToMinigame 0x878293c)
	void OnAddedToMinigame(class AFortMinigame*& FortMinigame); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.LoadData (Underlying native function: LoadData 0x8781e10)
	void LoadData(struct FUniqueNetIdRepl& PlayerId, struct FString& SavePath, class UObject*& OutData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.IsPersistentIDValid (Underlying native function: IsPersistentIDValid 0x8781ac8)
	static bool IsPersistentIDValid(struct FString& PersistentID); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.InitializePersistenceComponent (Underlying native function: InitializePersistenceComponent 0x8780d5c)
	void InitializePersistenceComponent(class UFortMinigameLogicComponent*& InLogicComponent, bool& bInUniqueForOwner); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.GetPersistentID (Underlying native function: GetPersistentID 0x877ffd0)
	struct FString GetPersistentID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.GetPersistencePlayersIds (Underlying native function: GetPersistencePlayersIds 0x5d2c5a0)
	void GetPersistencePlayersIds(struct TArray<struct FUniqueNetIdRepl>& PersistencePlayers); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.GetPersistencePlayers (Underlying native function: GetPersistencePlayers 0x877ff34)
	void GetPersistencePlayers(struct TArray<class AFortPlayerState*>& PersistencePlayers); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.GenerateNewPersistentIDAndResaveActor (Underlying native function: GenerateNewPersistentIDAndResaveActor 0x877ee94)
	void GenerateNewPersistentIDAndResaveActor(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponentBase.ClearData (Underlying native function: ClearData 0x877e3f0)
	void ClearData(struct FUniqueNetIdRepl& PlayerId, struct FString& SavePath); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

