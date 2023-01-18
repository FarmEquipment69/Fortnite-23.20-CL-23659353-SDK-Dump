// Class /Script/FortniteGame.FortAthenaSKPushCannon
// Size: 0x1b20
class AFortAthenaSKPushCannon : public AFortAthenaSKPushVehicle
{
	struct FName MainPhysicsProfileName; // 0x1ac0 (0x4)
	float MovementParam; // 0x1ac4 (0x4)
	float BatteryParam; // 0x1ac8 (0x4)
	float RumbleIntensity; // 0x1acc (0x4)
	class ULegacyCameraShake* DriverCameraShake; // 0x1ad0 (0x8)
	class ULegacyCameraShake* PassengerCameraShake; // 0x1ad8 (0x8)
	struct FVector PlayerTorque; // 0x1ae0 (0x18)
	bool bPlayerTorquingRepped; // 0x1af8 (0x1)
	bool bPlayerTorquing; // 0x1af9 (0x1)
	unsigned char unreflected_1afa[0x2]; // 0x1afa (0x2) 
	int CannonBoneIdx; // 0x1afc (0x4)
	class UPhysicalMaterial* PushCannonNoSleepPhysicsMaterial; // 0x1b00 (0x8)
	class UPhysicalMaterial* PushCannonPhysicsMaterial; // 0x1b08 (0x8)
	unsigned char padding_1b10[0x10]; // 0x1b10 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaSKPushCannon.ShowCooldownCue (Has no native function)
	void ShowCooldownCue(class AFortPlayerPawn*& Pawn, float& Duration); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaSKPushCannon.ServerSetPassengerTorquing (Underlying native function: ServerSetPassengerTorquing 0x82e49e0)
	void ServerSetPassengerTorquing(bool& bSetTo); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortAthenaSKPushCannon.OnPushCannonFired (Has no native function)
	void OnPushCannonFired(int& ShotsRemaining, bool& bLaunchingPlayer); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaSKPushCannon.OnPreLaunchPawn (Has no native function)
	void OnPreLaunchPawn(class AFortPlayerPawn*& Pawn, struct FVector& LaunchDir); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaSKPushCannon.OnPostExitVehicle (Has no native function)
	void OnPostExitVehicle(class AFortPawn*& ExitingPawn, int& SeatIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaSKPushCannon.OnLaunchPawn (Has no native function)
	void OnLaunchPawn(class AFortPlayerPawn*& Pawn, struct FVector& LaunchDir); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaSKPushCannon.MultiCastPushCannonLaunchedPlayer (Underlying native function: MultiCastPushCannonLaunchedPlayer 0x70f5d30)
	void MultiCastPushCannonLaunchedPlayer(); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortAthenaSKPushCannon.GetCurrentWorldAimOrientationCorrected (Underlying native function: GetCurrentWorldAimOrientationCorrected 0x82e32cc)
	struct FRotator GetCurrentWorldAimOrientationCorrected(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

