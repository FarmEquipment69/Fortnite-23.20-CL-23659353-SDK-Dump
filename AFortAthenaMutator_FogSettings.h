// Class /Script/FortniteGame.FortAthenaMutator_FogSettings
// Size: 0x348
class AFortAthenaMutator_FogSettings : public AFortAthenaMutator
{
	enum EAthenaFogDensityOverride FogDensityOverride; // 0x330 (0x1)
	unsigned char unreflected_331[0x3]; // 0x331 (0x3) 
	struct FLinearColor FogColor; // 0x334 (0x10)
	unsigned char padding_344[0x4]; // 0x344 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_FogSettings.UnsetFogOverrides (Underlying native function: UnsetFogOverrides 0x84a9d80)
	void UnsetFogOverrides(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_FogSettings.SetFogDensityOverride (Underlying native function: SetFogDensityOverride 0x84a9618)
	void SetFogDensityOverride(enum EAthenaFogDensityOverride& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_FogSettings.SetFogColorIndexOverride (Underlying native function: SetFogColorIndexOverride 0x84a959c)
	void SetFogColorIndexOverride(struct FLinearColor& NewValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_FogSettings.GetFogDensityValue (Underlying native function: GetFogDensityValue 0x84a5c1c)
	static float GetFogDensityValue(enum EAthenaFogDensityOverride& FogDensityOverride); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAthenaMutator_FogSettings.GetFogDensityOverride (Underlying native function: GetFogDensityOverride 0x84a5c04)
	enum EAthenaFogDensityOverride GetFogDensityOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_FogSettings.GetFogColorOverride (Underlying native function: GetFogColorOverride 0x84a5be8)
	struct FLinearColor GetFogColorOverride(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

