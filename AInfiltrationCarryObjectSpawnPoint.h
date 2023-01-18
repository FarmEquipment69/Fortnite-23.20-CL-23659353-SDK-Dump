// Class /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint
// Size: 0xad8
class AInfiltrationCarryObjectSpawnPoint : public ABuildingGameplayActor
{
	unsigned char unreflected_9d8[0x78]; // 0x9d8 (0x78) 
	enum ESpawnPointState CurrentState; // 0xa50 (0x1)
	unsigned char unreflected_a51[0x7]; // 0xa51 (0x7) 
	struct FScalableFloat IsSpawnPointEnabledFloat; // 0xa58 (0x28)
	unsigned char unreflected_a80[0x18]; // 0xa80 (0x18) 
	class USceneComponent* CachedSceneComponent; // 0xa98 (0x8)
	class AActor* CachedIntelActor; // 0xaa0 (0x8)
	class UClass* IntelClassToSpawn; // 0xaa8 (0x8)
	struct FGameplayTagContainer GameplayTags; // 0xab0 (0x20)
	unsigned char padding_ad0[0x8]; // 0xad0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.ServerOnIntelDownloaded (Has no native function)
	void ServerOnIntelDownloaded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.ServerOnIntelCaptured (Has no native function)
	void ServerOnIntelCaptured(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.ServerOnActive_CarryObjectOutOfRange (Has no native function)
	void ServerOnActiveCarryObjectOutOfRange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.ServerOnActive_CarryObjectInRange (Has no native function)
	void ServerOnActiveCarryObjectInRange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.OnRep_CurrentState (Underlying native function: OnRep_CurrentState 0x845fbc0)
	void OnRepCurrentState(enum ESpawnPointState& OldState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.OnHeldObjectThrownLanded (Underlying native function: OnHeldObjectThrownLanded 0x845f514)
	void OnHeldObjectThrownLanded(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.OnHeldObjectThrown (Underlying native function: OnHeldObjectThrown 0x845f500)
	void OnHeldObjectThrown(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.OnHeldObjectPlaced (Underlying native function: OnHeldObjectPlaced 0x845f4ec)
	void OnHeldObjectPlaced(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.OnHeldObjectPickedUp (Underlying native function: OnHeldObjectPickedUp 0x845f4d8)
	void OnHeldObjectPickedUp(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.OnHeldObjectDropped (Underlying native function: OnHeldObjectDropped 0x845f4c4)
	void OnHeldObjectDropped(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.OnHeldObjectDestroy (Underlying native function: OnHeldObjectDestroy 0x845f4b0)
	void OnHeldObjectDestroy(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.OnEnterWater (Underlying native function: OnEnterWater 0x845f3b4)
	void OnEnterWater(class AFortWaterBodyActor*& WaterBody, class UFortWaterInteractionComponent*& WaterInteractionComponent, bool& bIsFirstBody); // (Final | Native | Protected)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.GetIntelActor (Underlying native function: GetIntelActor 0x845de24)
	class AActor* GetIntelActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.ClientOnIntelDownloaded (Has no native function)
	void ClientOnIntelDownloaded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.ClientOnIntelCaptured (Has no native function)
	void ClientOnIntelCaptured(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.ClientOnActive_CarryObjectOutOfRange (Has no native function)
	void ClientOnActiveCarryObjectOutOfRange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.InfiltrationCarryObjectSpawnPoint.ClientOnActive_CarryObjectInRange (Has no native function)
	void ClientOnActiveCarryObjectInRange(); // (Event | Protected | BlueprintEvent)
};

