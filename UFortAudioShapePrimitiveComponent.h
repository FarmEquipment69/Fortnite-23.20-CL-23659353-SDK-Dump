// Class /Script/FortniteGame.FortAudioShapePrimitiveComponent
// Size: 0x188
class UFortAudioShapePrimitiveComponent : public UFortAudioShapeComponent
{
	class USoundBase* SoundOnEdge; // 0x120 (0x8)
	class USoundBase* SoundOnInside; // 0x128 (0x8)
	struct FMulticastInlineDelegate OnInsideStateChanged; // 0x130 (0x10)
	unsigned char padding_140[0x48]; // 0x140 (0x48)

	/* Functions */

	// Function /Script/FortniteGame.FortAudioShapePrimitiveComponent.GetIsPlayerInside (Underlying native function: GetIsPlayerInside 0x8e5e890)
	bool GetIsPlayerInside(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAudioShapePrimitiveComponent.GetInsideAudioComponent (Underlying native function: GetInsideAudioComponent 0x8e5e86c)
	class UAudioComponent* GetInsideAudioComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAudioShapePrimitiveComponent.GetEdgeAudioComponent (Underlying native function: GetEdgeAudioComponent 0x8e5e568)
	class UAudioComponent* GetEdgeAudioComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

