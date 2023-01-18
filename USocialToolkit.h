// Class /Script/Party.SocialToolkit
// Size: 0x2a8
class USocialToolkit : public UObject
{
	unsigned char unreflected_28[0x40]; // 0x28 (0x40) 
	class USocialUser* LocalUser; // 0x68 (0x8)
	struct TArray<class USocialUser*> AllUsers; // 0x70 (0x10)
	unsigned char unreflected_80[0x50]; // 0x80 (0x50) 
	struct TWeakObjectPtr<class ULocalPlayer> LocalPlayerOwner; // 0xd0 (0x8)
	class USocialChatManager* SocialChatManager; // 0xd8 (0x8)
	unsigned char padding_e0[0x1c8]; // 0xe0 (0x1c8)
};

