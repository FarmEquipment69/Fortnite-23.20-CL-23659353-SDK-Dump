// Class /Script/FortniteGame.FortEnemyDamagedParams
// Size: 0x40
class UFortEnemyDamagedParams : public UFortMissionEventParams
{
	class AFortPawn* DamagedPawn; // 0x28 (0x8)
	class AFortPlayerController* DamagedBy; // 0x30 (0x8)
	float DamageAmount; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortEnemyDamagedParams.SetParams (Underlying native function: SetParams 0x8b2ede8)
	void SetParams(class AFortPawn*& DamagedPawn, class AFortPlayerController*& DamagedBy, float& DamageAmount, class UFortEnemyDamagedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortEnemyDamagedParams.BreakParams (Underlying native function: BreakParams 0x8b2926c)
	void BreakParams(class AFortPawn*& DamagedPawn, class AFortPlayerController*& DamagedBy, float& DamageAmount); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

