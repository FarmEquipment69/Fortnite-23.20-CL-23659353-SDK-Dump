// Class /Script/AudioShapes.AudioShapeComponent
// Size: 0x140
class UAudioShapeComponent : public UAudioGameplayComponent
{
	unsigned char unreflected_a8[0x8]; // 0xa8 (0x8) 
	float MaxDistanceOffset; // 0xb0 (0x4)
	float SmoothingDistance; // 0xb4 (0x4)
	float FadeTime; // 0xb8 (0x4)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	struct FMulticastInlineDelegate OnAudibleStateChanged; // 0xc0 (0x10)
	struct TMap<struct FName, class UAudioComponent*> AudioComponents; // 0xd0 (0x50)
	struct TArray<class APlayerController*> LocalControllers; // 0x120 (0x10)
	unsigned char padding_130[0x10]; // 0x130 (0x10)

	/* Functions */

	// Function /Script/AudioShapes.AudioShapeComponent.UpdateAudioShape (Underlying native function: UpdateAudioShape 0x7df75c0)
	void UpdateAudioShape(struct TArray<class APlayerController*>& InLocalControllers); // (Final | Native | Public | HasOutParms)
};

