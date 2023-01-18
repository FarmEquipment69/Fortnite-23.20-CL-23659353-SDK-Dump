// Class /Script/FortniteGame.FortSplineAudioActor
// Size: 0x358
class AFortSplineAudioActor : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	float UpdateFrequencyInaudible; // 0x290 (0x4)
	float UpdateFrequencyAudible; // 0x294 (0x4)
	float MaxAudibleRange; // 0x298 (0x4)
	unsigned char unreflected_29c[0x34]; // 0x29c (0x34) 
	int NumSamplePoints; // 0x2d0 (0x4)
	unsigned char unreflected_2d4[0x4]; // 0x2d4 (0x4) 
	struct TArray<struct FVector> SamplePoints; // 0x2d8 (0x10)
	unsigned char unreflected_2e8[0x38]; // 0x2e8 (0x38) 
	class USoundBase* ClosestPointSound; // 0x320 (0x8)
	class USoundBase* NextClosestPointSound; // 0x328 (0x8)
	class USoundBase* MidPointSound; // 0x330 (0x8)
	class USplineComponent* AudioSpline; // 0x338 (0x8)
	class UAudioComponent* AudioAtClosestPoint; // 0x340 (0x8)
	class UAudioComponent* AudioAtNextClosestPoint; // 0x348 (0x8)
	class UAudioComponent* AudioAtMidPoint; // 0x350 (0x8)
};

