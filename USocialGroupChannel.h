// Class /Script/Party.SocialGroupChannel
// Size: 0x98
class USocialGroupChannel : public UObject
{
	class USocialUser* SocialUser; // 0x28 (0x8)
	struct FUniqueNetIdRepl GroupId; // 0x30 (0x30)
	struct FText DisplayName; // 0x60 (0x18)
	struct TArray<class USocialUser*> Members; // 0x78 (0x10)
	unsigned char padding_88[0x10]; // 0x88 (0x10)
};

