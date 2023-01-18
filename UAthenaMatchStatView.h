// Class /Script/FortniteUI.AthenaMatchStatView
// Size: 0x120
class UAthenaMatchStatView : public UAthenaBaseStatView
{
	unsigned char unreflected_28[0xe8]; // 0x28 (0xe8) 
	struct TArray<class UAthenaWeaponStatView*> WeaponStatViews; // 0x110 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMatchStatView.GetWeaponViews (Underlying native function: GetWeaponViews 0xa5b98bc)
	struct TArray<class UAthenaWeaponStatView*> GetWeaponViews(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaMatchStatView.GetWeaponViewHighestStat (Underlying native function: GetWeaponViewHighestStat 0xa5b97d4)
	class UAthenaWeaponStatView* GetWeaponViewHighestStat(struct FGameplayTag& InStat); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaMatchStatView.GetSortedWeaponViews (Underlying native function: GetSortedWeaponViews 0xa5b9404)
	struct TArray<class UAthenaWeaponStatView*> GetSortedWeaponViews(struct FGameplayTag& InStat); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaMatchStatView.GetMatchID (Underlying native function: GetMatchID 0x97bb1ac)
	struct FString GetMatchID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaMatchStatView.GetMatchEndTime (Underlying native function: GetMatchEndTime 0xa5b9038)
	struct FDateTime* GetMatchEndTime(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

