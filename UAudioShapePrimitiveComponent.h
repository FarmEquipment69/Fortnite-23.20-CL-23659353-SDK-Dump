// Class /Script/AudioShapes.AudioShapePrimitiveComponent
// Size: 0x1c8
class UAudioShapePrimitiveComponent : public UAudioShapeComponent
{
	class USoundBase* SoundOnEdge; // 0x140 (0x8)
	class USoundBase* SoundOnInside; // 0x148 (0x8)
	struct FMulticastInlineDelegate OnInsideStateChanged; // 0x150 (0x10)
	bool bUseOwningActorTransform; // 0x160 (0x1)
	bool bAutoRefreshShape; // 0x161 (0x1)
	unsigned char unreflected_162[0x6]; // 0x162 (0x6) 
	struct FVector ActorTransformScale; // 0x168 (0x18)
	unsigned char padding_180[0x48]; // 0x180 (0x48)

	/* Functions */

	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetIsPlayerInside (Underlying native function: GetIsPlayerInside 0x7df70dc)
	bool GetIsPlayerInside(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetInsideAudioComponent (Underlying native function: GetInsideAudioComponent 0x7df70b8)
	class UAudioComponent* GetInsideAudioComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetEdgeAudioComponent (Underlying native function: GetEdgeAudioComponent 0x7df7094)
	class UAudioComponent* GetEdgeAudioComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

