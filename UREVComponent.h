// Class /Script/REVRuntime.REVComponent
// Size: 0x7c0
class UREVComponent : public USynthComponent
{
	unsigned char unreflected_790[0x8]; // 0x790 (0x8) 
	class UREVModel* Model; // 0x798 (0x8)
	class URevSettings* SimSettings; // 0x7a0 (0x8)
	float PitchMultiplier; // 0x7a8 (0x4)
	unsigned char padding_7ac[0x14]; // 0x7ac (0x14)

	/* Functions */

	// Function /Script/REVRuntime.REVComponent.UpdateSimSettings (Underlying native function: UpdateSimSettings 0x720e628)
	void UpdateSimSettings(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/REVRuntime.REVComponent.UpdateParameters (Underlying native function: UpdateParameters 0x194c228)
	void UpdateParameters(float& InPitch, float& InRPM, float& InThrottle, float& InVelocity, int& InGear, bool& bInEnableShifting); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/REVRuntime.REVComponent.SetSettings (Underlying native function: SetSettings 0x720e590)
	void SetSettings(class URevSettings*& InSettings); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/REVRuntime.REVComponent.SetRevModel (Underlying native function: SetRevModel 0x720e4e0)
	void SetRevModel(class UREVModel*& InModel); // (Final | Native | Public | BlueprintCallable)
};

