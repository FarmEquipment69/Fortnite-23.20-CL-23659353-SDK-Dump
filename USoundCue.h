// Class /Script/Engine.SoundCue
// Size: 0x558
class USoundCue : public USoundBase
{
	class USoundNode* FirstNode; // 0x168 (0x8)
	float VolumeMultiplier; // 0x170 (0x4)
	float PitchMultiplier; // 0x174 (0x4)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x178 (0x3c8)
	float SubtitlePriority; // 0x540 (0x4)
	unsigned char unreflected_544[0x4]; // 0x544 (0x4) 
	unsigned char bPrimeOnLoad; // 0x548 (0x1)
	unsigned char bOverrideAttenuation; // 0x548 (0x1)
	unsigned char bExcludeFromRandomNodeBranchCulling; // 0x548 (0x1)
	unsigned char bHasPlayWhenSilent; // 0x548 (0x1)
	unsigned char unreflected_549[0x3]; // 0x549 (0x3) 
	int CookedQualityIndex; // 0x54c (0x4)
	unsigned char padding_550[0x8]; // 0x550 (0x8)
};

