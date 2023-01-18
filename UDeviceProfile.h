// Class /Script/Engine.DeviceProfile
// Size: 0xd0
class UDeviceProfile : public UTextureLODSettings
{
	struct FString DeviceType; // 0x38 (0x10)
	struct FString BaseProfileName; // 0x48 (0x10)
	unsigned char bIsVisibleForAssets; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	class UDeviceProfile* Parent; // 0x60 (0x8)
	unsigned char unreflected_68[0x28]; // 0x68 (0x28) 
	struct TArray<struct FString> CVars; // 0x90 (0x10)
	struct TArray<struct FDPMatchingRulestruct> MatchingRules; // 0xa0 (0x10)
	unsigned char padding_b0[0x20]; // 0xb0 (0x20)
};

