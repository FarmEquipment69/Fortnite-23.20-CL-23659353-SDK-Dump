// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotPerception
// Size: 0x40
class UFortAthenaAISpawnerDataComponent_AIBotPerception : public UFortAthenaAISpawnerDataComponent_PerceptionBase
{
	bool bOverrideVisibilityRange; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float SightRadius; // 0x34 (0x4)
	float LoseSightRadius; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotPerception.SetVisibilityRange (Underlying native function: SetVisibilityRange 0xa3ada94)
	void SetVisibilityRange(float& InSightRadius, float& LoseSightRadius); // (Final | Native | Public | BlueprintCallable)
};

