// Class /Script/Engine.CollisionProfile
// Size: 0x168
class UCollisionProfile : public UDeveloperSettings
{
	struct TArray<struct FCollisionResponseTemplate> Profiles; // 0x30 (0x10)
	struct TArray<struct FCustomChannelSetup*> DefaultChannelResponses; // 0x40 (0x10)
	struct TArray<struct FCustomProfile> EditProfiles; // 0x50 (0x10)
	struct TArray<struct FRedirector*> ProfileRedirects; // 0x60 (0x10)
	struct TArray<struct FRedirector*> CollisionChannelRedirects; // 0x70 (0x10)
	unsigned char padding_80[0xe8]; // 0x80 (0xe8)
};

