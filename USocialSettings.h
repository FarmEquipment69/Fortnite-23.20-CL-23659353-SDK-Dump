// Class /Script/Party.SocialSettings
// Size: 0x70
class USocialSettings : public UObject
{
	struct TArray<struct FName> OssNamesWithEnvironmentIdPrefix; // 0x28 (0x10)
	int DefaultMaxPartySize; // 0x38 (0x4)
	bool bPreferPlatformInvites; // 0x3c (0x1)
	bool bMustSendPrimaryInvites; // 0x3d (0x1)
	bool bLeavePartyOnDisconnect; // 0x3e (0x1)
	bool bSetDesiredPrivacyOnLocalPlayerBecomesLeader; // 0x3f (0x1)
	float UserListAutoUpdateRate; // 0x40 (0x4)
	int MinNicknameLength; // 0x44 (0x4)
	int MaxNicknameLength; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct TArray<struct FSocialPlatformDescription> SocialPlatformDescriptions; // 0x50 (0x10)
	struct TArray<struct FName> SonyOSSNames; // 0x60 (0x10)
};

