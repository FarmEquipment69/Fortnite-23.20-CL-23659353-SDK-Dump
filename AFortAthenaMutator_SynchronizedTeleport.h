// Class /Script/FortniteGame.FortAthenaMutator_SynchronizedTeleport
// Size: 0x538
class AFortAthenaMutator_SynchronizedTeleport : public AFortAthenaMutator
{
	struct FBeginGroupTeleportParams DefaultBeginGroupTeleportParams; // 0x330 (0x28)
	unsigned char unreflected_358[0x30]; // 0x358 (0x30) 
	struct FScalableFloat TeleportFailsafeTimeout; // 0x388 (0x28)
	struct FScalableFloat TeleportFailsafeRetryTime; // 0x3b0 (0x28)
	struct FScalableFloat RespawnLocationTolerance; // 0x3d8 (0x28)
	struct FGameplayTagContainer EventsToSendOnTeleport; // 0x400 (0x20)
	class UClass* HidePawnGameplayEffectClass; // 0x420 (0x8)
	struct FScalableFloat bHoldLoadingScreenUntilGroupTeleportIsComplete; // 0x428 (0x28)
	struct FScalableFloat StreamInDistanceDuringLoadOverride; // 0x450 (0x28)
	struct FScalableFloat bStillInvincibleAfterFailsafeTimer; // 0x478 (0x28)
	class UClass* CustomTeleportPlayerComponentClass; // 0x4a0 (0x8)
	bool bAutoEquipPickAxe; // 0x4a8 (0x1)
	unsigned char unreflected_4a9[0x17]; // 0x4a9 (0x17) 
	struct TArray<int> InProgressTeleportPlayerIDs; // 0x4c0 (0x10)
	unsigned char unreflected_4d0[0x20]; // 0x4d0 (0x20) 
	bool bTeleportComplete; // 0x4f0 (0x1)
	unsigned char unreflected_4f1[0x37]; // 0x4f1 (0x37) 
	struct TArray<class AController*> PlayersInStasis; // 0x528 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_SynchronizedTeleport.OnRep_TeleportComplete (Underlying native function: OnRep_TeleportComplete 0x8505f2c)
	void OnRepTeleportComplete(); // (Final | Native | Private)
};

