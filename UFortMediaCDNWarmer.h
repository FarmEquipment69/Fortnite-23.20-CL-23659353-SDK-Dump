// Class /Script/FortniteGame.FortMediaCDNWarmer
// Size: 0x68
class UFortMediaCDNWarmer : public UObject
{
	bool bWarmLive; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	class UFortMediaCDNHostnames* CDNHostNames; // 0x30 (0x8)
	unsigned char padding_38[0x30]; // 0x38 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortMediaCDNWarmer.Stop (Underlying native function: Stop 0x8970dc0)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaCDNWarmer.Start (Underlying native function: Start 0x8970dac)
	void Start(); // (Final | Native | Public | BlueprintCallable)
};

