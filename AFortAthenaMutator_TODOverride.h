// Class /Script/FortniteGame.FortAthenaMutator_TODOverride
// Size: 0x378
class AFortAthenaMutator_TODOverride : public AFortAthenaMutator
{
	enum EAthenaTimeOfDayOverride TimeOfDayOverride; // 0x330 (0x1)
	unsigned char unreflected_331[0x3]; // 0x331 (0x3) 
	float TimeOverride; // 0x334 (0x4)
	float SpeedOverride; // 0x338 (0x4)
	enum EAthenaLightIntensityOverride LightIntensityOverride; // 0x33c (0x1)
	enum EAthenaTODColor LightColorOverride; // 0x33d (0x1)
	enum EAthenaFogDensityOverride FogDensityOverride; // 0x33e (0x1)
	enum EAthenaTODColor FogColorOverride; // 0x33f (0x1)
	int PostProcessOverride; // 0x340 (0x4)
	unsigned char unreflected_344[0x4]; // 0x344 (0x4) 
	struct TArray<struct FTimeOfDayPhase> TimeOfDayPhases; // 0x348 (0x10)
	struct TArray<struct FTimeOfDaySpeed> TimeOfDaySpeeds; // 0x358 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> PostProcessOverrideActors; // 0x368 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_TODOverride.GetTimeOfDaySpeedNames (Underlying native function: GetTimeOfDaySpeedNames 0x8504f88)
	struct TArray<struct FText> GetTimeOfDaySpeedNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_TODOverride.GetTimeOfDayPhaseNames (Underlying native function: GetTimeOfDayPhaseNames 0x8504f4c)
	struct TArray<struct FText> GetTimeOfDayPhaseNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_TODOverride.GetFogStartDistance (Underlying native function: GetFogStartDistance 0x8504cc8)
	static float GetFogStartDistance(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

