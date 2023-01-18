// Class /Script/FortniteGame.FortSplineAudioComponent
// Size: 0x180
class UFortSplineAudioComponent : public UFortAudioShapeComponent
{
	class USoundBase* ClosestPointSound; // 0x120 (0x8)
	struct FMulticastInlineDelegate OnAudioUpdateInAudibleRange; // 0x128 (0x10)
	unsigned char unreflected_138[0x40]; // 0x138 (0x40) 
	class USplineComponent* Spline; // 0x178 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSplineAudioComponent.SetSpline (Underlying native function: SetSpline 0x8e60e88)
	void SetSpline(class USplineComponent*& NewSpline); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSplineAudioComponent.GetAudioComponent (Underlying native function: GetAudioComponent 0x8e5e1f8)
	class UAudioComponent* GetAudioComponent(); // (Final | Native | Public | BlueprintCallable)
};

