// Class /Script/Engine.CameraShakeSourceComponent
// Size: 0x2c0
class UCameraShakeSourceComponent : public USceneComponent
{
	enum ECameraShakeAttenuation Attenuation; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	float InnerAttenuationRadius; // 0x2a4 (0x4)
	float OuterAttenuationRadius; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0x4]; // 0x2ac (0x4) 
	class UClass* CameraShake; // 0x2b0 (0x8)
	bool bAutoStart; // 0x2b8 (0x1)
	unsigned char padding_2b9[0x7]; // 0x2b9 (0x7)

	/* Functions */

	// Function /Script/Engine.CameraShakeSourceComponent.StopAllCameraShakesOfType (Underlying native function: StopAllCameraShakesOfType 0x9cc0170)
	void StopAllCameraShakesOfType(class UClass*& InCameraShake, bool& bImmediately); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraShakeSourceComponent.StopAllCameraShakes (Underlying native function: StopAllCameraShakes 0x9cc00f0)
	void StopAllCameraShakes(bool& bImmediately); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraShakeSourceComponent.StartCameraShake (Underlying native function: StartCameraShake 0x9cbff9c)
	void StartCameraShake(class UClass*& InCameraShake, float& Scale, enum ECameraShakePlaySpace& Playspace, struct FRotator& UserPlaySpaceRot); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.CameraShakeSourceComponent.Start (Underlying native function: Start 0x9cbff88)
	void Start(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraShakeSourceComponent.GetAttenuationFactor (Underlying native function: GetAttenuationFactor 0x9cbe104)
	float GetAttenuationFactor(struct FVector& Location); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

