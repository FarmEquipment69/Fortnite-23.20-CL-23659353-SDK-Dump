// Class /Script/FortniteGame.FortGameplayAbility_PossessProp
// Size: 0xb70
class UFortGameplayAbility_PossessProp : public UFortGameplayAbility_Action
{
	class UDataTable* DefaultAllowedPropTable; // 0xb50 (0x8)
	class UDataTable* AllowedPropTable; // 0xb58 (0x8)
	struct TArray<struct TWeakObjectPtr<class UClass>> AllowedPropClasses; // 0xb60 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_PossessProp.SetAllowedPropTable (Underlying native function: SetAllowedPropTable 0x8123fac)
	void SetAllowedPropTable(class UDataTable*& InAllowedPropTable); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility_PossessProp.GetPreviewScaleByIndex (Underlying native function: GetPreviewScaleByIndex 0x8121ce0)
	float GetPreviewScaleByIndex(int& AllowedPropIndex); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility_PossessProp.GetAllowedPropDataByIndex (Underlying native function: GetAllowedPropDataByIndex 0x8121734)
	struct FPossessPropClasses GetAllowedPropDataByIndex(int& AllowedPropIndex); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility_PossessProp.GetAllowedPropClassByIndex (Underlying native function: GetAllowedPropClassByIndex 0x812166c)
	class UClass* GetAllowedPropClassByIndex(int& AllowedPropIndex); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

