// Class /Script/FortniteGame.FortMinigameVolumeComponent
// Size: 0x128
class UFortMinigameVolumeComponent : public UActorComponent
{
	class AFortMinigameSettingsBuilding* CurrentMinigameSettingsMachine; // 0xa0 (0x8)
	struct FMulticastInlineDelegate OnMinigameSettingsMachineChanged; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnMinigameSetUp; // 0xb8 (0x10)
	unsigned char unreflected_c8[0x30]; // 0xc8 (0x30) 
	struct FMulticastInlineDelegate OnShowPublishWatermarkChanged; // 0xf8 (0x10)
	unsigned char bShowPublishWatermark; // 0x108 (0x1)
	unsigned char unreflected_109[0x7]; // 0x109 (0x7) 
	class UClass* MinigameClass; // 0x110 (0x8)
	class AFortMinigame* CurrentMinigame; // 0x118 (0x8)
	unsigned char padding_120[0x8]; // 0x120 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameVolumeComponent.SetMinigameSettingsMachine (Underlying native function: SetMinigameSettingsMachine 0x8b0e25c)
	void SetMinigameSettingsMachine(class AFortMinigameSettingsBuilding*& NewMinigameSettingsMachine); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameVolumeComponent.OnRep_CurrentMinigame (Underlying native function: OnRep_CurrentMinigame 0x8b0cbc8)
	void OnRepCurrentMinigame(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigameVolumeComponent.OnRep_bShowPublishWatermark (Underlying native function: OnRep_bShowPublishWatermark 0x8b0cd20)
	void OnRepbShowPublishWatermark(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigameVolumeComponent.OnClientExitVolume (Underlying native function: OnClientExitVolume 0x8b0c914)
	void OnClientExitVolume(class APlayerState*& InPlayerState, class AFortVolume*& InVolume); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortMinigameVolumeComponent.OnClientEnterVolume (Underlying native function: OnClientEnterVolume 0x8b0c850)
	void OnClientEnterVolume(class APlayerState*& InPlayerState, class AFortVolume*& InVolume); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortMinigameVolumeComponent.HasReplicatedSettingsMachine (Underlying native function: HasReplicatedSettingsMachine 0x76e7400)
	bool HasReplicatedSettingsMachine(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

