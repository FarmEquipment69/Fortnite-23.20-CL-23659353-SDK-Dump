// Class /Script/FortniteGame.FortGameStateComponent_Reboot
// Size: 0x200
class UFortGameStateComponent_Reboot : public UFortGameStateComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	struct FSpawnMachineRepDataArray SpawnMachineRepData; // 0xb8 (0x120)
	unsigned char padding_1d8[0x28]; // 0x1d8 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateComponent_Reboot.SetSpawnMachineEnabledConfig (Underlying native function: SetSpawnMachineEnabledConfig 0x86ea0b8)
	void SetSpawnMachineEnabledConfig(class ABuildingGameplayActorSpawnMachine*& RebootVan, struct FSpawnMachineEnabledConfig& EnabledConfig); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_Reboot.IsResurrectionEnabled (Underlying native function: IsResurrectionEnabled 0x862b68c)
	bool IsResurrectionEnabled(class AFortPlayerPawn*& PlayerPawn); // (0x00000002 | Native | Public | BlueprintCallable | Const)
};

