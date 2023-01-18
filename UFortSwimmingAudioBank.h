// Class /Script/FortniteGame.FortSwimmingAudioBank
// Size: 0xc0
class UFortSwimmingAudioBank : public UDataAsset
{
	class USoundBase* SwimmingAssets1P[0x8]; // 0x30 (0x8) (ARRAY) 
	class USoundBase* SwimmingAssets3P[0x8]; // 0x70 (0x8) (ARRAY) 
	float TeammateVolumeMultiplier; // 0xb0 (0x4)
	float MaxSwimmingDistance; // 0xb4 (0x4)
	float RequiredImmersionDepth; // 0xb8 (0x4)
	unsigned char padding_bc[0x4]; // 0xbc (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortSwimmingAudioBank.GetTeammateVolumeMultiplier (Underlying native function: GetTeammateVolumeMultiplier 0x2d00ea0)
	float GetTeammateVolumeMultiplier(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortSwimmingAudioBank.GetSoundAsset (Underlying native function: GetSoundAsset 0x8e5ed80)
	class USoundBase* GetSoundAsset(bool& bIsLocal, struct TEnumAsByte<EFortSwimmingAudioType>& SwimType); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortSwimmingAudioBank.GetRequiredImmersionDepth (Underlying native function: GetRequiredImmersionDepth 0x2d00a0c)
	float GetRequiredImmersionDepth(); // (Final | Native | Public)
};

