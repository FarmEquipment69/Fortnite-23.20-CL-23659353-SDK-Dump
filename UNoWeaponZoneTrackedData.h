// Class /Script/FortniteGame.NoWeaponZoneTrackedData
// Size: 0x60
class UNoWeaponZoneTrackedData : public UDeviceTrackedData
{
	struct FMulticastInlineDelegate OnResetActorsDestroyedCount; // 0x28 (0x10)
	unsigned char unreflected_38[0x20]; // 0x38 (0x20) 
	class AFortMinigame* Minigame; // 0x58 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.NoWeaponZoneTrackedData.UntrackDevice (Underlying native function: UntrackDevice 0x87d28ac)
	void UntrackDevice(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.NoWeaponZoneTrackedData.TrackNewDevice (Underlying native function: TrackNewDevice 0x87d2878)
	void TrackNewDevice(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.NoWeaponZoneTrackedData.StartResetDestroyCountTimer (Underlying native function: StartResetDestroyCountTimer 0x87d2864)
	void StartResetDestroyCountTimer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.NoWeaponZoneTrackedData.SetupMinigame (Underlying native function: SetupMinigame 0x87d26ac)
	void SetupMinigame(class AFortMinigame*& InMinigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.NoWeaponZoneTrackedData.OnMinigameStarted (Underlying native function: OnMinigameStarted 0xfb0c9c)
	void OnMinigameStarted(); // (Native | Protected)

	// Function /Script/FortniteGame.NoWeaponZoneTrackedData.OnMinigameEnded (Underlying native function: OnMinigameEnded 0x28b2a48)
	void OnMinigameEnded(); // (Native | Protected)

	// Function /Script/FortniteGame.NoWeaponZoneTrackedData.IsTrackedDestroyAtLimit (Underlying native function: IsTrackedDestroyAtLimit 0x87d1b08)
	bool IsTrackedDestroyAtLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.NoWeaponZoneTrackedData.GetMaxDestroyCountPerTrackedDevice (Underlying native function: GetMaxDestroyCountPerTrackedDevice 0x87d0870)
	int GetMaxDestroyCountPerTrackedDevice(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.NoWeaponZoneTrackedData.GetMaxDestroyCount (Underlying native function: GetMaxDestroyCount 0x2d00a38)
	int GetMaxDestroyCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.NoWeaponZoneTrackedData.GetDestroyCount (Underlying native function: GetDestroyCount 0x7f92868)
	int GetDestroyCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.NoWeaponZoneTrackedData.AddTrackedDestroy (Underlying native function: AddTrackedDestroy 0x87cd650)
	void AddTrackedDestroy(); // (Final | Native | Public | BlueprintCallable)
};

