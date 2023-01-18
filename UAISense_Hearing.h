// Class /Script/AIModule.AISense_Hearing
// Size: 0xe8
class UAISense_Hearing : public UAISense
{
	struct TArray<struct FAINoiseEvent> NoiseEvents; // 0x80 (0x10)
	float SpeedOfSoundSq; // 0x90 (0x4)
	unsigned char padding_94[0x54]; // 0x94 (0x54)

	/* Functions */

	// Function /Script/AIModule.AISense_Hearing.ReportNoiseEvent (Underlying native function: ReportNoiseEvent 0xa1e358c)
	static void ReportNoiseEvent(class UObject*& WorldContextObject, struct FVector& NoiseLocation, float& Loudness, class AActor*& Instigator, float& MaxRange, struct FName& tag); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

