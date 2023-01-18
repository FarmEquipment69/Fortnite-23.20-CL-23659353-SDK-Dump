// Class /Script/FortniteGame.FortGameStatePvE
// Size: 0x10c8
class AFortGameStatePvE : public AFortGameStateZone
{
	bool bAllowMulching; // 0x1000 (0x1)
	unsigned char unreflected_1001[0x7]; // 0x1001 (0x7) 
	struct TArray<class AFortAIPawn*> DeployedDefenders; // 0x1008 (0x10)
	unsigned char unreflected_1018[0x50]; // 0x1018 (0x50) 
	class AFortAircraft* Aircraft; // 0x1068 (0x8)
	unsigned char unreflected_1070[0x18]; // 0x1070 (0x18) 
	bool bUseMoonbeamHUD; // 0x1088 (0x1)
	unsigned char unreflected_1089[0x3]; // 0x1089 (0x3) 
	uint32_t PickupsAllowedMax; // 0x108c (0x4)
	uint32_t PickupsDesiredSlack; // 0x1090 (0x4)
	float PickupDespawnDelaySeconds; // 0x1094 (0x4)
	bool bDebugPickupManagement; // 0x1098 (0x1)
	bool bEnablePickupManagement; // 0x1099 (0x1)
	enum EFortRarity ImportantPickupThreshold; // 0x109a (0x1)
	unsigned char unreflected_109b[0xd]; // 0x109b (0xd) 
	bool bWeaponSwappingEnabled; // 0x10a8 (0x1)
	unsigned char padding_10a9[0x1f]; // 0x10a9 (0x1f)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStatePvE.ShouldUseMoonbeamHUD (Underlying native function: ShouldUseMoonbeamHUD 0x8eacb28)
	bool ShouldUseMoonbeamHUD(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStatePvE.ShouldUseMoonbeamGameplayFunctionality (Underlying native function: ShouldUseMoonbeamGameplayFunctionality 0x8eacb04)
	bool ShouldUseMoonbeamGameplayFunctionality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStatePvE.SetPickupManagementSettings (Underlying native function: SetPickupManagementSettings 0x8eac894)
	void SetPickupManagementSettings(struct FPickupManagementSettings& PickupSettings); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStatePvE.OnDefenderRemoved (Underlying native function: OnDefenderRemoved 0x8eabfac)
	void OnDefenderRemoved(class AFortAIPawn*& Defender); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStatePvE.OnDefenderDeployed (Underlying native function: OnDefenderDeployed 0x8eabec0)
	void OnDefenderDeployed(class AFortAIPawn*& Defender); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStatePvE.IsWeaponSwappingEnabled (Underlying native function: IsWeaponSwappingEnabled 0x8eab660)
	bool IsWeaponSwappingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStatePvE.IsSwappableWeaponType (Underlying native function: IsSwappableWeaponType 0x8eab5a4)
	bool IsSwappableWeaponType(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStatePvE.IsMulchingAllowed (Underlying native function: IsMulchingAllowed 0x8eab58c)
	bool IsMulchingAllowed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStatePvE.IsDefenderItemDeployed (Underlying native function: IsDefenderItemDeployed 0x8eab298)
	bool IsDefenderItemDeployed(class UFortItem*& DefenderItem, class AFortPlayerStateZone*& RequestingPlayer); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStatePvE.GetPickupManagementSettings (Underlying native function: GetPickupManagementSettings 0x8eaa47c)
	void GetPickupManagementSettings(struct FPickupManagementSettings& PickupSettings); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStatePvE.GetAircraft (Underlying native function: GetAircraft 0x8ea9960)
	class AFortAircraft* GetAircraft(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStatePvE.CanSwapWeapon (Underlying native function: CanSwapWeapon 0x8ea9714)
	bool CanSwapWeapon(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStatePvE.CanSpawnDefender (Underlying native function: CanSpawnDefender 0x8ea8fb8)
	bool CanSpawnDefender(class AFortPlayerStateZone*& PlayerCausingRemoval, struct FName& RemoveFromDefenderSquadId, class AFortAIPawn*& OutDefenderToBeRemoved, enum EDefenderSpawnFailureReason& OutFailureReason); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

