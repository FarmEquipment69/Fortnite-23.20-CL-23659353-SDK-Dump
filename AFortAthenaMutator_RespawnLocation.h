// Class /Script/FortniteGame.FortAthenaMutator_RespawnLocation
// Size: 0x388
class AFortAthenaMutator_RespawnLocation : public AFortAthenaMutator
{
	bool bRespawnInAir; // 0x330 (0x1)
	unsigned char unreflected_331[0x7]; // 0x331 (0x7) 
	struct FGameplayTagQuery LocationQuery; // 0x338 (0x48)
	bool bRespawnAtDeath; // 0x380 (0x1)
	unsigned char unreflected_381[0x3]; // 0x381 (0x3) 
	float RespawnHeight; // 0x384 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_RespawnLocation.OnPlayerPawnResurrected (Has no native function)
	void OnPlayerPawnResurrected(class AFortPlayerPawn*& PlayerPawn); // (Event | Protected | BlueprintEvent)
};

