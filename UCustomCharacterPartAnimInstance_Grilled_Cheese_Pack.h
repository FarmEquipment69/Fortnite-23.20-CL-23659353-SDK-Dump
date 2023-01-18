// Class /Script/FortniteGame.CustomCharacterPartAnimInstance_Grilled_Cheese_Pack
// Size: 0x7e0
class UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack : public UCustomCharacterPartAnimInstance
{
	bool ActiveKill; // 0x6e8 (0x1)
	unsigned char unreflected_6e9[0x3]; // 0x6e9 (0x3) 
	float crackCount; // 0x6ec (0x4)
	float crackSpin; // 0x6f0 (0x4)
	float crackSpinSpeed; // 0x6f4 (0x4)
	float InterpSpeed; // 0x6f8 (0x4)
	bool isCrackCount; // 0x6fc (0x1)
	unsigned char unreflected_6fd[0x3]; // 0x6fd (0x3) 
	float KillCount; // 0x700 (0x4)
	unsigned char unreflected_704[0x4]; // 0x704 (0x4) 
	struct TArray<float> killCrackArray; // 0x708 (0x10)
	float onCrackSpinSpeed; // 0x718 (0x4)
	unsigned char unreflected_71c[0x4]; // 0x71c (0x4) 
	struct FRotator crackRot; // 0x720 (0x18)
	struct FRotator SpinningRotator00; // 0x738 (0x18)
	struct FRotator SpinningRotator01; // 0x750 (0x18)
	struct FRotator SpinningRotator02; // 0x768 (0x18)
	struct FRotator SpinningRotator03; // 0x780 (0x18)
	struct FVector crackTran; // 0x798 (0x18)
	struct FVector CubeFloatA; // 0x7b0 (0x18)
	struct FVector CubeFloatB; // 0x7c8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_Grilled_Cheese_Pack.UpdateSpinSettings (Underlying native function: UpdateSpinSettings 0x882ed4c)
	void UpdateSpinSettings(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_Grilled_Cheese_Pack.UpdateFloatCubes (Underlying native function: UpdateFloatCubes 0x882ecf0)
	void UpdateFloatCubes(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_Grilled_Cheese_Pack.UpdateCrackSpinLogic (Underlying native function: UpdateCrackSpinLogic 0x882ec18)
	void UpdateCrackSpinLogic(float& DeltaTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_Grilled_Cheese_Pack.UpdateCracks (Underlying native function: UpdateCracks 0x882ec9c)
	void UpdateCracks(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_Grilled_Cheese_Pack.SpinFNC (Underlying native function: SpinFNC 0x882eb14)
	float SpinFNC(float& Speed, float& InitialValue); // (Final | Native | Public | BlueprintCallable)
};

