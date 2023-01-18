// Class /Script/FortniteGame.BuildingTrapDefender
// Size: 0x10e0
class ABuildingTrapDefender : public ABuildingTrapFloor
{
	enum EFortDefenderInteractionError LastInteractError; // 0x1088 (0x1)
	unsigned char unreflected_1089[0x7]; // 0x1089 (0x7) 
	class AFortAIPawn* DefenderPawn; // 0x1090 (0x8)
	class UFortDefenderItemDefinition* DefenderItemDefinition; // 0x1098 (0x8)
	int DefenderItemLevel; // 0x10a0 (0x4)
	unsigned char unreflected_10a4[0x4]; // 0x10a4 (0x4) 
	struct FMulticastInlineDelegate DefenderPawnOrItemSet; // 0x10a8 (0x10)
	unsigned char padding_10b8[0x28]; // 0x10b8 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.BuildingTrapDefender.TakeWeaponAwayFromDefender (Underlying native function: TakeWeaponAwayFromDefender 0x893143c)
	class UFortWorldItem* TakeWeaponAwayFromDefender(class UFortWorldItem*& WeaponToTakeAway); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrapDefender.SupplyDefender (Underlying native function: SupplyDefender 0x81210cc)
	void SupplyDefender(class UFortWorldItem*& WeaponToGive, int& AmmoQuantity); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrapDefender.SpawnDefenderfromItem (Underlying native function: SpawnDefenderfromItem 0x8e81f00)
	class AFortAIPawn* SpawnDefenderfromItem(class UFortAccountItem*& DefenderItem, struct FName& DefenderSquadId, struct FTransform& SpawnTransform, class AActor*& InOwner); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrapDefender.RemoveCurrentDefender (Has no native function)
	void RemoveCurrentDefender(class AFortPlayerStateZone*& RequestingPlayer, bool& bRemovalCausedByPlayerJoin); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrapDefender.OnRep_DefenderPawn (Has no native function)
	void OnRepDefenderPawn(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrapDefender.OnRep_DefenderItemDefinition (Has no native function)
	void OnRepDefenderItemDefinition(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrapDefender.GetLastInteractErrorText (Underlying native function: GetLastInteractErrorText 0x8e7e8a8)
	struct FText GetLastInteractErrorText(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrapDefender.GetDefenderSpawnTransform (Has no native function)
	struct FTransform GetDefenderSpawnTransform(); // (Event | Public | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingTrapDefender.DeployDefender (Has no native function)
	void DeployDefender(class AFortPlayerController*& ItemSelectorPC, class UFortDefenderItem*& InDefenderItem, struct FName& InDefenderSquadId, class UFortWorldItem*& WeaponToGive, int& AmmoQuantity); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrapDefender.ClearCurrentDefender (Has no native function)
	void ClearCurrentDefender(bool& bForceKillDefender); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)
};

