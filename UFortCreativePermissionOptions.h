// Class /Script/FortniteUI.FortCreativePermissionOptions
// Size: 0x6c0
class UFortCreativePermissionOptions : public UFortMatchmakingKnobsModal
{
	enum EFortCreativePlotPermission CurrentPermissionsEnum; // 0x6a8 (0x1)
	unsigned char unreflected_6a9[0x7]; // 0x6a9 (0x7) 
	struct TArray<struct FFortCreativeWhitelistUserEntry> WhitelistedUsers; // 0x6b0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePermissionOptions.UpdatePermissions (Underlying native function: UpdatePermissions 0xa6dc744)
	void UpdatePermissions(enum EFortCreativePlotPermission& Permissions, struct TArray<struct FString>& WhiteList); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePermissionOptions.ShowWhitelistLimitError (Has no native function)
	void ShowWhitelistLimitError(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePermissionOptions.CloseDialog (Has no native function)
	void CloseDialog(); // (Event | Public | BlueprintEvent)
};

