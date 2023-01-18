// Class /Script/FortniteGame.FortVolumePersistenceOptions
// Size: 0xf8
class UFortVolumePersistenceOptions : public UActorComponent
{
	unsigned char bAllowPlayerToClearData; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct TMap<class UFortCreativePersistenceComponent*, struct FFortCreativePersistenceOptions> FortCreativePersistenceOptionsMap; // 0xa8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortVolumePersistenceOptions.UpdatePersistenceComponent (Underlying native function: UpdatePersistenceComponent 0x87832f8)
	void UpdatePersistenceComponent(class UFortCreativePersistenceComponent*& FortCreativePersistenceComponent, struct FFortCreativePersistenceOptions& FortCreativePersistenceOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumePersistenceOptions.UnregistryFortCreativePersistenceComponent (Underlying native function: UnregistryFortCreativePersistenceComponent 0x71a663c)
	void UnregistryFortCreativePersistenceComponent(class UFortCreativePersistenceComponent*& FortCreativePersistenceComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumePersistenceOptions.RegistryFortCreativePersistenceComponent (Underlying native function: RegistryFortCreativePersistenceComponent 0x87832f8)
	void RegistryFortCreativePersistenceComponent(class UFortCreativePersistenceComponent*& FortCreativePersistenceComponent, struct FFortCreativePersistenceOptions& FortCreativePersistenceOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumePersistenceOptions.IsTherePersistenceDevices (Underlying native function: IsTherePersistenceDevices 0x8781c34)
	bool IsTherePersistenceDevices(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumePersistenceOptions.IsPlayerClearDataOptionAllowed (Underlying native function: IsPlayerClearDataOptionAllowed 0x2214948)
	bool IsPlayerClearDataOptionAllowed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumePersistenceOptions.GetFirstOrderedPersistenceComponent (Underlying native function: GetFirstOrderedPersistenceComponent 0x6cc27c4)
	class UFortCreativePersistenceComponent* GetFirstOrderedPersistenceComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

