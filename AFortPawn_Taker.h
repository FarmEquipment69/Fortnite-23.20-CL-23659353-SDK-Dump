// Class /Script/FortniteGame.FortPawn_Taker
// Size: 0x3320
class AFortPawn_Taker : public AFortAIPawn
{
	float SlowShackleScale; // 0x32f8 (0x4)
	unsigned char bUseClimbLinks; // 0x32fc (0x1)
	unsigned char unreflected_32fd[0xb]; // 0x32fd (0xb) 
	struct TArray<struct FBuildingHitTime> BuildingCollisions; // 0x3308 (0x10)
	unsigned char padding_3318[0x8]; // 0x3318 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPawn_Taker.SetScalarParameterOnAllCharacterMIDs (Has no native function)
	void SetScalarParameterOnAllCharacterMIDs(struct FName& ParameterName, float& ScalarValue); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn_Taker.RestorePreviousMaterialOnCharacterMesh (Has no native function)
	void RestorePreviousMaterialOnCharacterMesh(float& ScalarValue); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn_Taker.OverrideMaterialAndCopyParametersOnCharacterMesh (Has no native function)
	void OverrideMaterialAndCopyParametersOnCharacterMesh(class UMaterialInterface*& NewMaterialToApply); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

