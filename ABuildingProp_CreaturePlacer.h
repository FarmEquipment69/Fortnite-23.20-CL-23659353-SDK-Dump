// Class /Script/FortniteGame.BuildingProp_CreaturePlacer
// Size: 0xff8
class ABuildingProp_CreaturePlacer : public ABuildingProp_AISpawner
{
	enum EFortMinigameState CurrentMinigameState; // 0xf30 (0x1)
	unsigned char unreflected_f31[0x7]; // 0xf31 (0x7) 
	struct TArray<struct FSpawnGroupVisuals> SpawnGroupVisuals; // 0xf38 (0x10)
	struct TWeakObjectPtr<class UClass> SelectedSpawnGroup; // 0xf48 (0x28)
	struct TWeakObjectPtr<class UClass> SelectedSpawnLimit; // 0xf70 (0x28)
	bool bHideVFX; // 0xf98 (0x1)
	bool bEnabledOnGameState; // 0xf99 (0x1)
	bool bDestroyPreviousOnSpawn; // 0xf9a (0x1)
	enum EFortMinigameState GameStateEnable; // 0xf9b (0x1)
	unsigned char unreflected_f9c[0x4]; // 0xf9c (0x4) 
	struct FMulticastInlineDelegate OnCreatureVisualsLoadComplete; // 0xfa0 (0x10)
	bool bCreatureVisualsDoneLoading; // 0xfb0 (0x1)
	unsigned char unreflected_fb1[0x7]; // 0xfb1 (0x7) 
	class UFortGameplayReceiverMessageComponent* TurnOnReceiverComponent; // 0xfb8 (0x8)
	class UFortGameplayReceiverMessageComponent* TurnOffReceiverComponent; // 0xfc0 (0x8)
	class UFortGameplayTriggerMessageComponent* CreatureKilledTransmitComponent; // 0xfc8 (0x8)
	bool bEnableCreativeCreatureSpawners; // 0xfd0 (0x1)
	unsigned char unreflected_fd1[0x7]; // 0xfd1 (0x7) 
	class USkeletalMeshComponent* CreatureSkeletalMeshComponent; // 0xfd8 (0x8)
	unsigned char padding_fe0[0x18]; // 0xfe0 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_CreaturePlacer.UpdateCreatureVisuals (Underlying native function: UpdateCreatureVisuals 0x860ddc0)
	void UpdateCreatureVisuals(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CreaturePlacer.OnTurnOnReceived (Underlying native function: OnTurnOnReceived 0x860c5b0)
	void OnTurnOnReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CreaturePlacer.OnTurnOffReceived (Underlying native function: OnTurnOffReceived 0x860c4a4)
	void OnTurnOffReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CreaturePlacer.MinigameStateChanged (Underlying native function: MinigameStateChanged 0x860a66c)
	void MinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& NewMinigameState); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CreaturePlacer.GetCreatureSkeletalMeshComponent (Underlying native function: GetCreatureSkeletalMeshComponent 0x8608a38)
	class USkeletalMeshComponent* GetCreatureSkeletalMeshComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

