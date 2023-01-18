// Class /Script/FortniteGame.FortFootstepAudioBank
// Size: 0x1500
class UFortFootstepAudioBank : public UDataAsset
{
	struct TEnumAsByte<EFortFootstepSurfaceType> PhysicalSurfaceMappings[0x1e]; // 0x30 (0x1) (ARRAY) 
	unsigned char unreflected_4e[0x2]; // 0x4e (0x2) 
	float TeammateVolumeMultiplier; // 0x50 (0x4)
	float MaxFootstepDistance; // 0x54 (0x4)
	float VerticalPitchMaxBelow; // 0x58 (0x4)
	float VerticalPitchMaxAbove; // 0x5c (0x4)
	float VerticalPitchTileRange; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	struct FFortFootstepSurfaceAudioData SurfaceData1P[0xe]; // 0x68 (0xa8) (ARRAY) 
	struct FFortFootstepSurfaceAudioData SurfaceData3P[0xe]; // 0x998 (0xa8) (ARRAY) 
	struct FFortFootstepAttenuationData AttenuationData1P[0x7]; // 0x12c8 (0x28) (ARRAY) 
	struct FFortFootstepAttenuationData AttenuationData3P[0x7]; // 0x13e0 (0x28) (ARRAY) 
	int VersionNumber; // 0x14f8 (0x4)
	unsigned char padding_14fc[0x4]; // 0x14fc (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortFootstepAudioBank.GetSurfaceInfo (Underlying native function: GetSurfaceInfo 0x8e5ef34)
	void GetSurfaceInfo(struct FFortFootstepSurfaceInfo& OutInfo, struct TEnumAsByte<EFortFootstepSurfaceType>& InSurfaceType, bool& bUse1PFootsteps); // (Final | Native | Public | HasOutParms | Const)

	// Function /Script/FortniteGame.FortFootstepAudioBank.GetSoundAsset (Underlying native function: GetSoundAsset 0x8e5ebe0)
	class USoundBase* GetSoundAsset(bool& bIsLocal, struct TEnumAsByte<EFortFootstepAudioType>& StepType, struct TEnumAsByte<EFortFootstepSurfaceType>& SurfaceType, struct TEnumAsByte<EFortFootstepPosition>& StepPosition); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortFootstepAudioBank.GetFootstepVolumeMultiplier (Underlying native function: GetFootstepVolumeMultiplier 0x8e5e60c)
	float GetFootstepVolumeMultiplier(bool& bIsLocal, bool& bApplyTeammateVolume, struct TEnumAsByte<EFortFootstepAudioType>& StepType); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortFootstepAudioBank.GetAttenuationAsset (Underlying native function: GetAttenuationAsset 0x8e5e0e8)
	class USoundAttenuation* GetAttenuationAsset(bool& bIsLocal, struct TEnumAsByte<EFortFootstepAudioType>& StepType, struct TEnumAsByte<EFortFootstepPosition>& StepPosition); // (Final | Native | Public)
};

