// Class /Script/FortniteUI.FortCreativeServerInfo
// Size: 0x78
class UFortCreativeServerInfo : public UObject
{
	int CurrentPlayerCount; // 0x28 (0x4)
	int MaxPlayerCount; // 0x2c (0x4)
	struct TArray<struct FString> MatchFriendsList; // 0x30 (0x10)
	struct FString OwnerName; // 0x40 (0x10)
	class UFortSocialUser* FriendInMatch; // 0x50 (0x8)
	enum EFortCreativeServerPrivacySetting PrivacySetting; // 0x58 (0x1)
	bool IsNewServer; // 0x59 (0x1)
	unsigned char unreflected_5a[0x6]; // 0x5a (0x6) 
	struct FText ServerTypeText; // 0x60 (0x18)
};

