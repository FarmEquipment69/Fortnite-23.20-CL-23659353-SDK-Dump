// Class /Script/FortniteUI.FortCreativePublishOptions
// Size: 0x490
class UFortCreativePublishOptions : public UCommonActivatableWidget
{
	enum EFortCreativePlotPermission CurrentPermissionsEnum; // 0x3a8 (0x1)
	unsigned char unreflected_3a9[0x7]; // 0x3a9 (0x7) 
	class UHorizontalBox* IslandBackupBox; // 0x3b0 (0x8)
	class UHorizontalBox* IslandRestoreBox; // 0x3b8 (0x8)
	class UVerticalBox* CheckpointBox; // 0x3c0 (0x8)
	class UHorizontalBox* UpgradeToEventsBox; // 0x3c8 (0x8)
	class UHorizontalBox* OptInForDeviceUpgradesBox; // 0x3d0 (0x8)
	class UCommonAnimatedSwitcher* SwitcherIslandPublish; // 0x3d8 (0x8)
	class UHorizontalBox* HorizontalBoxIslandPublish; // 0x3e0 (0x8)
	unsigned char unreflected_3e8[0x8]; // 0x3e8 (0x8) 
	class UHorizontalBox* HorizontalBoxHowToPublish; // 0x3f0 (0x8)
	unsigned char unreflected_3f8[0x8]; // 0x3f8 (0x8) 
	class UCommonTextBlock* TextRestoreTime; // 0x400 (0x8)
	class UCommonTextBlock* TextOnCooldown; // 0x408 (0x8)
	class UCommonButtonBase* ButtonBackup; // 0x410 (0x8)
	class UCommonButtonBase* ButtonUpgradeToEvents; // 0x418 (0x8)
	class UCommonButtonBase* ButtonOptInForDeviceUpgrades; // 0x420 (0x8)
	class UCommonButtonBase* ButtonRestore; // 0x428 (0x8)
	class UCommonButtonBase* ButtonPublish; // 0x430 (0x8)
	struct TWeakObjectPtr<class UClass> SoftPublishModalClass; // 0x438 (0x28)
	struct TWeakObjectPtr<class UClass> SoftCreateBuildModalClass; // 0x460 (0x28)
	unsigned char padding_488[0x8]; // 0x488 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePublishOptions.UpdateTimeSinceLastBackup (Underlying native function: UpdateTimeSinceLastBackup 0xa6dc970)
	void UpdateTimeSinceLastBackup(struct FDateTime*& LastBackup); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteUI.FortCreativePublishOptions.UpdatePermissions (Underlying native function: UpdatePermissions 0xa6dc830)
	void UpdatePermissions(enum EFortCreativePlotPermission& Permissions); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortCreativePublishOptions.RestoreMyIslandFromBackup (Underlying native function: RestoreMyIslandFromBackup 0xa6db018)
	void RestoreMyIslandFromBackup(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePublishOptions.ResetMyCurrentCreativePlot (Underlying native function: ResetMyCurrentCreativePlot 0xa6dafa0)
	void ResetMyCurrentCreativePlot(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortCreativePublishOptions.OptInForDeviceUpgrades (Underlying native function: OptInForDeviceUpgrades 0xa6da5b0)
	void OptInForDeviceUpgrades(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePublishOptions.OnSaveStateChanged (Has no native function)
	void OnSaveStateChanged(bool& bSuccess); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePublishOptions.OnRestoreStateChanged (Has no native function)
	void OnRestoreStateChanged(bool& bReady); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePublishOptions.OnRestoreMyIslandFromBackup (Has no native function)
	void OnRestoreMyIslandFromBackup(bool& bSuccess); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePublishOptions.OnBackupMyIsland (Has no native function)
	void OnBackupMyIsland(bool& bSuccess); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePublishOptions.InitializeData (Underlying native function: InitializeData 0x1d01d9c)
	void InitializeData(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePublishOptions.ConvertToEvents (Underlying native function: ConvertToEvents 0xa6d769c)
	void ConvertToEvents(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePublishOptions.CheckpointSaveStateChanged (Underlying native function: CheckpointSaveStateChanged 0xa6d7524)
	void CheckpointSaveStateChanged(enum EBackupSaveState& SaveState); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortCreativePublishOptions.CheckpointRestoreStateChanged (Underlying native function: CheckpointRestoreStateChanged 0xa6d74a4)
	void CheckpointRestoreStateChanged(enum EBackupSaveState& SaveState); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortCreativePublishOptions.BackupMyIsland (Underlying native function: BackupMyIsland 0xa6d70d8)
	void BackupMyIsland(); // (Final | Native | Public | BlueprintCallable)
};

