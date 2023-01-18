// BlueprintGeneratedClass /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C
// Size: 0xb30
class UGA_BoostJumpPack_Equip_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb28 (0x8)

	/* Functions */

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetGadgetItem (Has no native function)
	class UFortItem* GetGadgetItem(class AFortPlayerPawn*& Pawn); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetPlayerController (Has no native function)
	void GetPlayerController(class AFortPlayerPawn*& Pawn, class AFortPlayerControllerZone*& AsFortPlayerControllerZone, bool& CallFuncIsValidReturnValue, class AController*& CallFuncGetControllerReturnValue, class AFortPlayerControllerZone*& K2NodeDynamicCastAsFortPlayerControllerZone, bool& K2NodeDynamicCastbSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.IsAuthority (Has no native function)
	void IsAuthority(bool& bAuthority, bool& CallFuncHasAuthorityReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_CanActivateAbility (Has no native function)
	bool K2CanActivateAbility(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer& RelevantTags); // (Event | Protected | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.ExecuteUbergraph_GA_BoostJumpPack_Equip (Has no native function)
	void ExecuteUbergraphGABoostJumpPackEquip(int& EntryPoint); // (Final | 0x00008000)
};

