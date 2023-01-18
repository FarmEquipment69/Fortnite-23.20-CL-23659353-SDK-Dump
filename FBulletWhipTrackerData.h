// ScriptStruct /Script/FortniteGame.BulletWhipTrackerData
// Size: 0x58
struct FBulletWhipTrackerData
{
	unsigned char bAttachSoundToOwner; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float PassByRadiusMax; // 0x4 (0x4)
	float PassByRadiusMin; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class USoundBase* PassByFarSound; // 0x10 (0x8)
	class USoundBase* PassByCloseSound; // 0x18 (0x8)
	float MinimumTriggerDistance; // 0x20 (0x4)
	float TriggerAheadDistance; // 0x24 (0x4)
	class UAudioComponent* CurrentAudioComp; // 0x28 (0x8)
	float PreviousPlaneDotProd; // 0x30 (0x4)
	float CachedPassDistance; // 0x34 (0x4)
	struct FVector CachedPassLocation; // 0x38 (0x18)
	float PassByClosenessIntensity; // 0x50 (0x4)
	bool bActive; // 0x54 (0x1)
	unsigned char padding_55[0x3]; // 0x55 (0x3)
};

