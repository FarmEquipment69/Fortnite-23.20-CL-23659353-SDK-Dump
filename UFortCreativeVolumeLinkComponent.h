// Class /Script/FortniteGame.FortCreativeVolumeLinkComponent
// Size: 0x128
class UFortCreativeVolumeLinkComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x10]; // 0xa0 (0x10) 
	class UPlaylistUserOptions* EditorOptionDefinition; // 0xb0 (0x8)
	struct FMulticastInlineDelegate OnLinkedVolumeSet; // 0xb8 (0x10)
	class AFortVolume* LinkedVolume; // 0xc8 (0x8)
	bool bShouldFindVolumeAtStart; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x7]; // 0xd1 (0x7) 
	struct FPropertyOverrideData LinkedVolumeProperties; // 0xd8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeVolumeLinkComponent.OnRep_LinkedVolume (Underlying native function: OnRep_LinkedVolume 0x88c1728)
	void OnRepLinkedVolume(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeVolumeLinkComponent.OnLinkedVolumeSettingsChanged (Underlying native function: OnLinkedVolumeSettingsChanged 0x88c1648)
	void OnLinkedVolumeSettingsChanged(struct FPropertyOverrideData& OverrideData); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCreativeVolumeLinkComponent.GetLinkedVolume (Underlying native function: GetLinkedVolume 0x88c1464)
	class AFortVolume* GetLinkedVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

