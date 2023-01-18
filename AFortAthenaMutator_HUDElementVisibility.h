// Class /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility
// Size: 0x348
class AFortAthenaMutator_HUDElementVisibility : public AFortAthenaMutator
{
	struct FHUDElementVisibilityPriorityStacks PriorityStacksRepData; // 0x330 (0x10)
	unsigned char padding_340[0x8]; // 0x340 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility.RequestVisibilityModSourceID (Underlying native function: RequestVisibilityModSourceID 0x84d0a9c)
	int RequestVisibilityModSourceID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility.OnVolumePlaysetChanged (Underlying native function: OnVolumePlaysetChanged 0x84d0710)
	void OnVolumePlaysetChanged(class UFortPlaysetItemDefinition*& PlaysetItemDef); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility.OnRep_PriorityStacksRepData (Underlying native function: OnRep_PriorityStacksRepData 0x84d0310)
	void OnRepPriorityStacksRepData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility.OnMinigameSetUp (Underlying native function: OnMinigameSetUp 0x84cff58)
	void OnMinigameSetUp(class AFortMinigame*& Minigame); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility.OnCreativeLinkedVolumeChangedForPC (Underlying native function: OnCreativeLinkedVolumeChangedForPC 0x84cf5e0)
	void OnCreativeLinkedVolumeChangedForPC(class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility.OnClientPlayModeChanged (Underlying native function: OnClientPlayModeChanged 0x84cf520)
	void OnClientPlayModeChanged(class AFortMinigame*& Minigame, bool& bIsInPlayMode); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility.OnClientEnteredVolume (Underlying native function: OnClientEnteredVolume 0x84cf36c)
	void OnClientEnteredVolume(class APlayerState*& Client, class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility.MulticastUpdateVisibilityModData (Underlying native function: MulticastUpdateVisibilityModData 0x84cf270)
	void MulticastUpdateVisibilityModData(struct FHUDElementVisibilityRepData& UpdatedVisibilityData); // (Net | NetReliable | Native | Event | NetMulticast | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility.MulticastRemoveVisibilityModData (Underlying native function: MulticastRemoveVisibilityModData 0x84cf138)
	void MulticastRemoveVisibilityModData(enum EFortHUDElementVisibiltyPriority& Priority, struct FHUDElementVisibilityRepData& VisibilityData); // (Net | NetReliable | Native | Event | NetMulticast | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility.MulticastClearVisibilityModData (Underlying native function: MulticastClearVisibilityModData 0x76c3d90)
	void MulticastClearVisibilityModData(); // (Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_HUDElementVisibility.MulticastAddVisibilityModData (Underlying native function: MulticastAddVisibilityModData 0x84cf000)
	void MulticastAddVisibilityModData(enum EFortHUDElementVisibiltyPriority& Priority, struct FHUDElementVisibilityRepData& VisibilityData); // (Net | NetReliable | Native | Event | NetMulticast | Protected | BlueprintCallable)
};

