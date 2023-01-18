// Class /Script/AugmentedReality.ARSkyLight
// Size: 0x2a8
class AARSkyLight : public ASkyLight
{
	class UAREnvironmentCaptureProbe* CaptureProbe; // 0x298 (0x8)
	unsigned char padding_2a0[0x8]; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe (Underlying native function: SetEnvironmentCaptureProbe 0x97bee48)
	void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe*& InCaptureProbe); // (Final | Native | Public | BlueprintCallable)
};

