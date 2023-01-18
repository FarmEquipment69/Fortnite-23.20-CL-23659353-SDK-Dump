// Class /Script/FortniteGame.BuildingPhoenixRepairActor
// Size: 0xa58
class ABuildingPhoenixRepairActor : public ABuildingGameplayActor
{
	struct TArray<class UFortItemDefinition*> ResourceWhitelist; // 0x9d8 (0x10)
	struct FMulticastInlineDelegate OnCurrentWeaponChanged; // 0x9e8 (0x10)
	bool bCallOnLocalInteract; // 0x9f8 (0x1)
	unsigned char bCurrentInteractionSuccess; // 0x9f9 (0x1)
	enum EFortRarity RepairedWeaponRarity; // 0x9fa (0x1)
	unsigned char padding_9fb[0x5d]; // 0x9fb (0x5d)

	/* Functions */

	// Function /Script/FortniteGame.BuildingPhoenixRepairActor.GetWeaponRepairRecipe (Underlying native function: GetWeaponRepairRecipe 0x86097dc)
	void GetWeaponRepairRecipe(class AFortPlayerController*& FPC, struct FRecipe& OutRecipe); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingPhoenixRepairActor.GetWeaponHasDurability (Underlying native function: GetWeaponHasDurability 0x8609750)
	bool GetWeaponHasDurability(class UFortWorldItem*& WeaponItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingPhoenixRepairActor.GetCurrentWeapon (Underlying native function: GetCurrentWeapon 0x8608a68)
	class UFortWorldItem* GetCurrentWeapon(class AFortPlayerController*& FPC); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingPhoenixRepairActor.CanWeaponBeRepaired (Underlying native function: CanWeaponBeRepaired 0x8607834)
	bool CanWeaponBeRepaired(class UFortWorldItem*& WeaponItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

